#include <stdio.h>
int main(){
    int first,second;
    char oprtr,answer;
    do{
    printf("Enter first number, operator, second number: ");
    scanf("%d %c %d",&first,&oprtr,&second);

    switch (oprtr){
    case '+':
         printf("Answer = %d",first+second);
         break;
    case '-':
         printf("Answer = %d", first-second);
         break;
    case '/':
        if(second == 0){
            printf("The second one shouldn't be zero!");
        }else{
            printf("Answer = %0.2f", (float)first/(float)second);
        }
         break;
    case '*':
         printf("Answer = %d", first*second);
         break;
}
    printf("\nOnce again? (y/n) ");
    fflush(stdin);
    scanf("%c",&answer);
    }while(answer=='y');
return 0;
}
