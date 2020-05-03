#include <stdio.h>

int main(){
int a,b,c;
float x;
printf("Program outputs the value of square function.\n");
printf("Enter coefficients of the square function.\n");
printf("a b c :");
scanf ("%d %d %d",&a,&b,&c);
printf("Enter value of argument:");
scanf("%f",&x);
printf("Value of the square function with coefficients %d, %d ,%d at %0.2f is %0.2f",a,b,c,x,(float)a*x*x+b*x+c);
return 0;
}
