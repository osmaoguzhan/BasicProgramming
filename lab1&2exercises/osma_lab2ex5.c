#include <stdio.h>
#include <math.h>
int main(){
int speed;
printf("Enter wind speed(mph):");
scanf("%d",&speed);

if(speed<=0){
    printf("The speed should be positive!");
}else{
    if(speed>=74 && speed<=95){
        printf("Category 1");
    }else if(speed>=96 && speed<=110){
        printf("Category 2");
    }else if(speed>=111 && speed<=130){
        printf("Category 3");
    }else if(speed>=131 && speed<=155){
        printf("Category 4");
    }else{
        printf("Category 5");
    }
}

return 0;
}


