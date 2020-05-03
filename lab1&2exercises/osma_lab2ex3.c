#include <stdio.h>
#include <math.h>
int main(){
int a,b,c;
printf("Enter 3 sides:");
scanf("%d %d %d",&a,&b,&c);
float s = (float)(a+b+c)/2;
float area = sqrt(s*(s-a)*(s-b)*(s-c));
if(area==0)
    printf("Wrong side length!");
else
    printf("The area is %0.2f and the perimeter is %d",area,a+b+c);
return 0;
}


