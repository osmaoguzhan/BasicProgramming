#include <stdio.h>

int main(){
     int givenNumber;
        int sum=0;
        do{
        printf("Enter integer:");
        scanf("%d",&givenNumber);
        if(givenNumber>0){
            if(givenNumber%2==0){
                printf("%d is positive even\n",givenNumber);
                sum = sum + givenNumber;
            }
            else{
                printf("%d is positive odd\n",givenNumber);
            }

        }else if (givenNumber<0){
            if(givenNumber%2==0){
                printf("%d is negative even\n",givenNumber);
                sum = sum + givenNumber;
            }
            else
                printf("%d is negative odd\n",givenNumber);
        }else{
            printf("Zero is entered\n");
        }
        }while(givenNumber!=0);

        printf("Sum of even equals %d\n",sum);
}
