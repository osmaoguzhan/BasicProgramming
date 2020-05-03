#include <stdio.h>

int main(){

float celcius = 0;
printf("Temperature converter from Celsius into Kelvin and Fahrenheit\n");
printf("\nEnter the value of temperature in Celciues scale:");
scanf("%f",&celcius);
printf("%0.2f Celcius = %0.2f Kelvin\n",celcius,celcius + 273.15);
printf("%0.2f Celcius = %0.2f Fahrenheit \n",celcius,32+(9*celcius/5));
return 0;
}
