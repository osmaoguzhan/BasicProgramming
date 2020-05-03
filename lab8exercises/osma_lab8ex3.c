#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void generateArray(int *randomArray,int upper,int lower,int size);
void displayArray(int *randomArray,int size);
void reverseArray(int *randomArray,int size);
void swapIntegers(int *randomArray,int index1,int index2);
int main(){
    int upper,lower;
    int n;
    char answer;
    do{
        printf("How many elements you want:");
        scanf("%d",&n);
        int randomArray[n];
        printf("Lower bound:");
        scanf("%d",&lower);
        printf("Upper bound:");
        scanf("%d",&upper);
        generateArray(randomArray,upper,lower,n);
        printf("Array of %d numbers:\n",n);
        displayArray(randomArray,n);
        printf("\n");
        reverseArray(randomArray,n);
        displayArray(randomArray,n);
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
void reverseArray(int *randomArray,int size){
    for (int i=0,j=size-1;i<ceil(size/2);i++,j--){
        swapIntegers(randomArray,i,j);
    }

}
void swapIntegers(int *randomArray,int index1, int index2){
    int temp=randomArray[index1];
    randomArray[index1]=randomArray[index2];
    randomArray[index2]=temp;
}
