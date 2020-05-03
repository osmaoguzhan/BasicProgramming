
#include <stdio.h>

int main(){
  char respond;
        int positiveInt;
        printf("Please enter positive integer and if you'd like to keep asking please press 'y' or 'Y'!\n");
        do{
           printf("Enter integer:");
           scanf("%d",&positiveInt);
           if(positiveInt>0){
                for(int i=1;i<=positiveInt;i++){
                    if(positiveInt%i==0){
                        printf("%d positive divisor of given integer\n",i);
                    }
                }
           }else{
            printf("The given integer should be positive!");
           }
           fflush(stdin);
           printf("Would you like to try again? ");
           scanf("%c",&respond);
        }while(respond=='Y' || respond=='y');
}
