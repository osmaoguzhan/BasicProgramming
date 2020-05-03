
#include <stdio.h>
#include <stdbool.h>
struct fraction{
    float numerator;
    float denominator;
};
int findLargest(struct fraction *fracArray,int n);

int main(){
    bool check = false;
    int n;
    int temp;
    printf("How many fractions you'd like to add: ");
    scanf("%d",&n);
    struct fraction fracArray[n];
    for(int i=0;i<n;i++){
        printf("Numerator of %d. Fraction:",i+1);
        scanf("%f",&fracArray[i].numerator);
        printf("Denominator of %d. Fraction:",i+1);
        scanf("%f",&fracArray[i].denominator);
    }

    for(int i=0;i<n;i++){
        if(fracArray[i].denominator==0){
            check = true;
        }
    }
    if(check){
        printf("Denominators should not be 0!!");
    }else{
        temp = findLargest(fracArray,n);
        printf("--------------------------------------------------\n");
        printf("The largest fraction is %d. fraction which is %0.f/%0.f ",temp+1,fracArray[temp].numerator,fracArray[temp].denominator);
    }

    return 0;
}
int findLargest(struct fraction *fracArray,int n){
    float max = fracArray[0].numerator/fracArray[0].denominator;
    int temp=0;
    for(int i = 1 ; i<n;i++){
        if(max<fracArray[i].numerator/fracArray[i].denominator){
            max=fracArray[i].numerator/fracArray[i].denominator;
            temp=i;
        }

    }
    return temp;

}
