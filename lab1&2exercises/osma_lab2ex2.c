#include <stdio.h>
int main(){
int a,b,c;
printf("Enter 3 integers:");
scanf("%d %d %d",&a,&b,&c);
if(a==b && a==c)
    printf("Equal!");
else
    printf("Not equal!!");
return 0;
}


