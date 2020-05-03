#include <stdio.h>

int main(){
        int n;
        int sum=0;
        printf("Enter n:");
        scanf("%d",&n);
        if(n>0){
        for(int i=2;i<n;i++){
            int x=n, y=i;
            while(x!=y){
                if(x>y){
                    x=x-y;
                }else{
                    y=y-x;
                }
            }
            if(x==1){
                sum=sum+i;
            }
        }
        printf("The sum of all relatively primes with %d is %d",n,sum);
        }else{
            printf("The integer should be positive!!");
        }
}
