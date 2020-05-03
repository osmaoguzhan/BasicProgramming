#include <stdio.h>
struct fraction{
    float numerator;
    float denominator;
};
float findSum(struct fraction f1,struct fraction f2);
float findDifference(struct fraction f1,struct fraction f2);
float findProduct(struct fraction f1,struct fraction f2);
float findQuotient(struct fraction f1,struct fraction f2);
int main(){
    struct fraction f1,f2;
    printf("Numerator of First Fraction:");
    scanf("%f",&f1.numerator);
    printf("Denominator of First Fraction:");
    scanf("%f",&f1.denominator);
    printf("Numerator of Second Fraction:");
    scanf("%f",&f2.numerator);
    printf("Denominator of Second Fraction:");
    scanf("%f",&f2.denominator);
    if(f1.denominator==0 || f2.denominator==0){
        printf("Denominators should not be 0!");
    }else{
        printf("--------------------------------------\n");
        printf("Sum of fractions : %0.2f\n",findSum(f1,f2));
        printf("Difference of fractions : %0.2f\n",findDifference(f1,f2));
        printf("Product of fractions: %0.2f\n",findProduct(f1,f2));
        printf("Quotient of fractions: %0.2f\n",findQuotient(f1,f2));
    }

    return 0;
}
float findSum(struct fraction f1,struct fraction f2){
    return f1.numerator/f1.denominator + f2.numerator/f2.denominator;
}
float findDifference(struct fraction f1,struct fraction f2){
    return f1.numerator/f1.denominator - f2.numerator/f2.denominator;
}
float findProduct(struct fraction f1,struct fraction f2){
    return (f1.numerator/f1.denominator)*(f2.numerator/f2.denominator);
}
float findQuotient(struct fraction f1,struct fraction f2){
    return (f1.numerator/f1.denominator)/(f2.numerator/f2.denominator);
}
