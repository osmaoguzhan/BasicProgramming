#include <stdio.h>
#include <stdlib.h>
int main(){
    float array[6];
    float minimum,maximum,sum=0;
    int locationMax =0,locationMin = 0;
    int check=0;
    float temp;
    printf("Enter scores in range 0.0-10.0\n");
    while(check!=6){
        temp=0;
        scanf("%f", &temp);
        if(temp>=0 && temp<=10){
            array[check]=temp;
            check++;
        }else{
            printf("The score should be in range 0-10!\n");
        }
    }

    minimum = array[0];
    maximum = array[0];
    for (int c = 1; c < 6; c++)
    {
        if (array[c] < minimum)
        {
           minimum = array[c];
           locationMin = c;
        }
        if(array[c]>maximum){
            maximum = array[c];
            locationMax = c;
        }
    }
    for(int i=0;i<6;i++){
        if(!((i==locationMax)||(i==locationMin))){
            sum = sum + array[i];
        }
    }
    printf("Average of scores is %0.2f",sum/4);


return 0;
}
