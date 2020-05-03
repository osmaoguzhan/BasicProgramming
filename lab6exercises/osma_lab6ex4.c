#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int n,a,b;
    srand(time(NULL));
    do{
    printf("Enter the size which is greater than 0:");
    scanf("%d",&n);
    if(n<=0){
        printf("\nPlease type a number which is greater than 0");
    }
    }while(n<=0);
    printf("\nPlease type the range [a,b] : ");
    scanf("%d %d",&a, &b);
    int max=a;
    int array[n];
    printf("Random numbers : ");
    for(int i=0;i<n;i++){
        array[i] =rand() % (b-a) + a;
        printf("%d ",array[i]);
        if(array[i]>max && array[i]<0){
            max = array[i];
        }
    }
    if(max == a){
        printf("\nThere isn't any negative value.");
    }else{
        printf("\nMax negative value is %d",max);
    }
return 0;
}

