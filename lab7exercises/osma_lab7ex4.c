#include <stdio.h>
#include <stdbool.h>

bool input_integer(int a,int b);
int gcd(int a, int b);
int lcm(int a, int b);
int main()
{
    int a,b;
    printf("Enter the integers\n");
    bool check=true;
    while(check){
        scanf("%d %d",&a,&b);
        check = input_integer(a,b);
        if(!check){
            printf("\nOne of numbers is not positive, please try again!\n");
            check=true;
        }
        else{
            break;
        }
    }
    printf("GCD = %d",gcd(a,b));
    printf("\nLCM = %d",lcm(a,b));

    return 0;
}

int gcd(int a, int b)
{
    int gcd;
     for(int i=1; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    return gcd;
}

int lcm(int a,int b)
{
    int min = (a > b) ? a : b;
    while (1) {
        if (min % a == 0 && min % b == 0) {
            return min;
        }
        ++min;
    }
}

bool input_integer(int a,int b)
{
    return (a>0 && b>0)?true:false;
}
