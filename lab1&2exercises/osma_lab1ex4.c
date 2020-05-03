#include <stdio.h>

int main(){
int a,b;
printf("Enter 2 integers:");
scanf("%d %d",&a,&b);
printf("%d + %d = %d\n",a,b,a+b);
printf("%d - %d = %d\n",a,b,a-b);
printf("%d * %d = %d\n",a,b,a*b);
if(b!=0)
    printf("%d / %d = %0.2f\n",a,b,(float)a/b);
else
    printf("Can't be divided!\n");
return 0;
}
