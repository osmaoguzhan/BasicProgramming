#include <stdio.h>
#include <math.h>
int main(){
float a,b,c;
float w1,w2,w3;
printf("Enter grades:");
scanf("%f %f %f",&a,&b,&c);
printf("Enter weights:");
scanf("%f %f %f",&w1,&w2,&w3);
if(w1>0||w2>0||w3>0){
    printf("The weigthed aritmetic average is %f",(a*w1+b*w2+c*w3)/(w1+w2+w3));
}else{
    printf("At least one of them should be positive!");
}
return 0;
}


