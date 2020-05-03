#include <stdio.h>
#define PI 3.14
int cylinderRadiusAndHeight(float *r,float *h);
float totalArea(float r, float h);
float surfaceArea(float r, float h);
int main(){

    float r,h;
    printf("Enter the radius and height of the cylinder\n");
    int check;
    if((check=cylinderRadiusAndHeight(&r,&h))==2){
        float surArea= surfaceArea(r,h);
        float totArea=totalArea(r,h);
        printf("Total area : %0.2f \nSurface area: %0.2f",totArea,surArea);
    }else if(check==1)
        printf("Radius or height is incorrect!");
     else
        printf("Both values are incorrect!");
return 0;
}

 float surfaceArea(float r, float h)
 {
     return 2*r*h*PI;

 }
float totalArea(float r, float h)
 {
     return 2*PI*r*r + 2*PI*r*h;

 }
int cylinderRadiusAndHeight(float *r,float *h)
{
    int result=0;
    printf("Radius: ");
    if(scanf("%f",r)==1 && *r>0)
        result++;

    fflush(stdin);
    printf("Height: ");
    if(scanf("%f",h)==1 && *h>0)
        result++;

    return result;
}
