#include <stdio.h>
#define eurToPln 4.57
#define usdToPln 4.19
#define tryToPln 0.63
int main(){
    float amount = 0;
    int option=0;
    printf("Please type one of options:");
    printf("\n1 -> PLN to EURO\n2 -> EURO to PLN\n3 -> PLN to USD\n4 -> USD to PLN\n5 -> PLN to TRY\n6 -> TRY to PLN\n");
    scanf("%d",&option);
    printf("Your choice is %d",option);
    printf("\nEnter the amount:");
    scanf("%f",&amount);
    switch (option){

    case 1:
         printf("%0.2f PLN = %0.2f EURO", amount,amount/eurToPln);
         break;

    case 2:
         printf("%0.2f EURO = %0.2f PLN", amount,amount*eurToPln);
         break;

    case 3:
         printf("%0.2f PLN = %0.2f USD", amount,amount/usdToPln);
         break;

    case 4:
        printf("%0.2f USD = %0.2f PLN", amount,amount*usdToPln);
        break;

    case 5:
        printf("%0.2f PLN = %0.2f TRY", amount,amount/tryToPln);
        break;

    case 6:
        printf("%0.2f TRY = %0.2f PLN", amount,amount*tryToPln);
        break;

}
return 0;
}
