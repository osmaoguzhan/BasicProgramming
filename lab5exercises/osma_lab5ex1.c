#include <stdio.h>

#define EXERCISE1a
//EXERCISE1a, EXERCISE1b
int main()
{
    #ifdef EXERCISE1a //do while version of exercise 1
        int givenNumber;
        do{
        printf("Enter integer:");
        scanf("%d",&givenNumber);
        if(givenNumber>0){
            if(givenNumber%2==0)
                printf("%d is positive even\n",givenNumber);
            else
                printf("%d is positive odd\n",givenNumber);
        }else if(givenNumber<0){
            if(givenNumber%2==0)
                printf("%d is negative even\n",givenNumber);
            else
                printf("%d is negative odd\n",givenNumber);
        }else{
            printf("Zero is entered\n");
        }
        }while(givenNumber!=0);
    #endif // EXERCISE1a

    #ifdef EXERCISE1b //while version of exercise 1
        int givenNumber;
        while(1){
            printf("Enter integer:");
            scanf("%d",&givenNumber);
            if(givenNumber>0){
                if(givenNumber%2==0)
                    printf("%d is positive even\n",givenNumber);
                else
                    printf("%d is positive odd\n",givenNumber);
            }else if(givenNumber<0){
                if(givenNumber%2==0)
                    printf("%d is negative even\n",givenNumber);
                else
                    printf("%d is negative odd\n",givenNumber);
            }else{
                printf("Zero is entered\n");
                break;
            }
        }
    #endif // EXERCISE1b
}
