#include <stdio.h>
#include <stdbool.h>

bool getInteger(int integerValue);
void isPrime(int integerValue);
void displayPrimes(int integerValue);
int main()
{
    int integerValue;
    printf("Enter a positive integer\n");
    while(1){
        scanf("%d",&integerValue);
        if(integerValue<=0)
            printf("Try again! The number should be positive integer!\n");
        else
            break;
    }
    if(getInteger(integerValue)){
        printf("The integer is positive!\n");
        isPrime(integerValue);
        displayPrimes(integerValue);
    }else{
        printf("The integer is negative!");
    }
    return 0;
}

void isPrime(int integerValue)
{
    bool check=true;
    for(int i=2;i<=integerValue;i++){
        if(integerValue%i==0){
            check=false;
        }
    }
    if(check){
        printf("The integer is prime!\n");
    }else{
        printf("The integer is not prime!\n");
    }
}

void displayPrimes(int integerValue)
{
    printf("All primes less than given integer: ");
    int counter=0;
    for(int i=2;i<integerValue;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                counter = counter+1;
            }
        }
        if(counter<3){
                printf("%d ",i);
            }
            counter=0;
    }
}

bool getInteger(int integerValue)
{
    return (integerValue>0)?true:false;
}

