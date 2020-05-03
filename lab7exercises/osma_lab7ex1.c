#include <stdio.h>
float rectangleArea(float side1, float side2);
float rectangleCircumference(float side1,float side2);
int rectangleSides(float *side1,float *side2);
int main()
{
    float a,b;
    printf("Enter the sides of the rectangle\n");
    int aa;
    if ((aa=rectangleSides(&a,&b))==2)
    {
        float x=rectangleArea(a,b);
        float y=rectangleCircumference(a,b);
        printf("\nRectangle with sides %g %g \nArea = %g \nCircumference= %g\n",a,b,x,y);
    }
    else if (aa==1)
        printf("Only one side has the correct value");
    else
        printf("Two sides have an incorrect value");
    return 0;
}

float rectangleArea(float side1, float side2)
{
    return side1*side2;
}

float rectangleCircumference(float side1,float side2)
{
    return 2*(side1+side2);
}

int rectangleSides(float *side1,float *side2)
{
    int result=0;
    printf(": ");
    if(scanf("%f",side1)==1 && *side1>0)
        result++;

    fflush(stdin);
    printf(": ");
    if(scanf("%f",side2)==1 && *side2>0)
        result++;

    return result;
}
