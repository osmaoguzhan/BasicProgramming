#include <stdio.h>

int main(){
  char respond;
        int positiveInt, newNumber, temp=0, remainder, digit;
        printf("Please enter a positive integer at most five-digit and if you'd like to keep asking please press 'y' or 'Y'!\n");
        do{
           digit=0,newNumber=0;
           printf("Enter integer:");
           scanf("%d",&positiveInt);
           temp = positiveInt;
           while(positiveInt>0){
                positiveInt = positiveInt/10;
                digit++;
           }
           if(digit<=5){
                if(temp>0){
                    while(temp>0){
                        remainder = temp %10;
                        newNumber = newNumber * 10 + remainder;
                        temp = temp - remainder;
                        temp/=10;
                    }
                    printf("Reversed number is %d",newNumber);
                }else{
                    printf("The given integer should be positive!");
                }
            }else{
                printf("The integer should be at most-five-digits!!");
            }
            fflush(stdin);
            printf("\nWould you like to try again? ");
            scanf("%c",&respond);
        }while(respond=='Y' || respond=='y');

}
