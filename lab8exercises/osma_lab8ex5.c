#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generateArray(int *randomArray,int upper,int lower,int size);
void displayArray(int *randomArray,int size);
int countNegatives(int *randomArray,int size);
int findGreatest(int *randomArray,int size);
int main(){
    int howMany;
    int upper,lower;
    char answer;
    do{
        printf("How many elements you want:");
        scanf("%d",&howMany);
        int *randomArray=(int *)malloc(sizeof(int)*howMany);
        printf("Lower bound:");
        scanf("%d",&lower);
        printf("Upper bound:");
        scanf("%d",&upper);
        generateArray(randomArray,upper,lower,howMany);
        printf("Array of %d numbers:\n",howMany);
        displayArray(randomArray,howMany);
        int numberOfNeg = countNegatives(randomArray,howMany);
        if(numberOfNeg==0){
            printf("\nThere is no negative value!!");
        }else{
            printf("\nNUMBER OF NEGATIVE VALUES is %d",numberOfNeg);
            printf("\nTHE GREATEST NEGATIVE VALUE is %d",findGreatest(randomArray,howMany));
        }
        fflush(stdin);
        printf("\nWould you like to run again?(y/n)\n");
        scanf("%c",&answer);
    }while(answer == 'y');
    return 0;
}
void generateArray(int *randomArray,int upper,int lower,int size){

    srand(time(NULL));
    for(int i=0;i<size;i++){
        randomArray[i]=rand()%(upper+1-lower)+lower;
    }
}
void displayArray(int *randomArray,int size){
    for(int i=0;i<size;i++){
        printf("%d ",randomArray[i]);
    }
}
int countNegatives(int *randomArray,int size){
    int counter = 0;
    for(int i=0;i<size;i++){
        if(randomArray[i]<0){
            counter+=1;
        }
    }
    return counter;
}
int findGreatest(int *randomArray,int size){
    int greatest=0;
    for(int i=0;i<size;i++){
        if(randomArray[i]<0){
           if(greatest==0 || randomArray[i]>greatest){
                greatest= randomArray[i];
           }
        }
    }
    return greatest;
}
