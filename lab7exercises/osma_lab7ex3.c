#include <stdio.h>
#include <stdbool.h>
#define PI 3.14
float sumOf3(float a, float b, float c);
float averageOf3(float a, float b, float c);
float largestOf3(float numbers[]);
bool is3different(float numbers[]);
int main(){

    float numbers[3];
    printf("Enter 3 numbers: ");
    for(int i=0;i<3;i++)
        scanf("%f",&numbers[i]);
    printf("Sum = %0.2f",sumOf3(numbers[0],numbers[1],numbers[2]));
    printf("\nAvg = %0.2f",averageOf3(numbers[0],numbers[1],numbers[2]));
    printf("\nLargest = %0.2f",largestOf3(numbers));
    printf("\nIs Different = %s",is3different(numbers)?"true":"false");
return 0;
}

 float sumOf3(float a, float b, float c)
 {
     return a+b+c;

 }
float averageOf3(float a, float b, float c)
 {
     return (a+b+c)/3;

 }
float largestOf3(float numbers[])
{
    float max=numbers[0];
    for(int i=1;i<3;i++){
        if(numbers[i]>max){
            max = numbers[i];
        }
    }
    return max;
}
bool is3different(float numbers[])
{
    bool check=true;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i!=j){
                if(numbers[i]==numbers[j]){
                    check = false;
                    break;
                }
            }
        }
    }
    return check;
}



