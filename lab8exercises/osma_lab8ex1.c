#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generateArray(int *randomArray,int upper,int lower,int size);
void displayArray(int *randomArray,int size);
int countOdd(int *randomArray,int size);
float averageOdd(int *randomArray,int size);
int main(){
    int howMany;
    int upper,lower;
    char answer;
    do{
        printf("How many elements you want:");
        scanf("%d",&howMany);
        int randomArray[howMany];
        printf("Upper bound:");
        scanf("%d",&upper);
        printf("Lower bound:");
        scanf("%d",&lower);
        generateArray(randomArray,upper,lower,howMany);
        printf("Array of %d numbers:\n",howMany);
        displayArray(randomArray,howMany);
        int numberOfOdds = countOdd(randomArray,howMany);
        printf("\nNUMBER OF ODD VALUES is %d",numberOfOdds);
        if(numberOfOdds>0){
            printf("\nAVERAGE OF ODD VALUES is %f",averageOdd(randomArray,howMany));
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
int countOdd(int *randomArray,int size){
    int counter = 0;
    for(int i=0;i<size;i++){
        if(randomArray[i]%2!=0){
            counter+=1;
        }
    }
    return counter;
}
float averageOdd(int *randomArray,int size){
    int sum=0;
    int counter =0;
    for(int i=0;i<size;i++){
        if(randomArray[i]%2!=0){
            counter+=1;
            sum+=randomArray[i];
        }
    }
    return (float)sum/(float)counter;
}
