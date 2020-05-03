#include <stdio.h>
#define N 5
void exercise1();
void exercise2a();
void exercise2b();
void exercise2c();
void exercise3();
void exercise4();
int main()
{	
	//All exercises has been seperated to different void functions
   //exercise1();
   //exercise2a();
   //exercise2b();
   //exercise2c();
   //exercise3();
   //exercise4();
	getch();
	return 0;
} 

void exercise1(){
	//EXERCISE 1
	int elements[N];
	int i,j;
	printf("Enter 5 intergers:\n");
	
	for(i=0;i<N;i++){
		printf("Element #%d: ",i+1);
		scanf("%d",&elements[i]);
	}
	
	int sum=0;
	
	for(j=0;j<N;j++){
		sum = sum +elements[j];
	}
	printf("\nSum of %d %d %d %d %d is %d",elements[0],elements[1],elements[2],elements[3],elements[4],sum);
}
void exercise2a(){
	//EXERCISE 2a
	int n,i,j;
	
	printf("How many integers: ");
	scanf("%d",&n);
	int intArray[n];
	
	for(i=0;i<n;i++){
		printf("#%d: ",i+1);
		scanf("%d",&intArray[i]);
	}
	int counter=0;
	for(j=0;j<n;j++){
		if(intArray[j]<0){
			counter = counter +1;
		}
	}
	printf("\nNumber of elements with negative value: %d",counter);
}
void exercise2b(){
	//EXERCISE 2b
	int n,i,j;
	
	printf("How many integers: ");
	scanf("%d",&n);
	int intArray[n];
	
	for(i=0;i<n;i++){
		printf("#%d: ",i+1);
		scanf("%d",&intArray[i]);
	}
	int sum=0;
	for(j=0;j<n;j++){
		if(intArray[j]<0){
			sum =sum + intArray[j];
		}
	}
	printf("\nSum of elements with negative value: %d",sum);
}
void exercise2c(){
	//EXERCISE 2c
	int n,i,j;
	
	printf("How many integers: ");
	scanf("%d",&n);
	int intArray[n];
	
	for(i=0;i<n;i++){
		printf("#%d: ",i+1);
		scanf("%d",&intArray[i]);
	}
	float average;
	int sum=0;
	int counter=0;
	for(j=0;j<n;j++){
		if(intArray[j]<0){
			counter = counter +1;
			sum = sum + intArray[j];
		}
	}
	average = (float)sum/(float)counter;
	printf("\nAverage of elements with negative value: %.2f",average);
}
void exercise3(){
	//EXERCISE 3
	int i,j,n;
	printf("How many integers: ");
	scanf("%d",&n);
	int intArray[n];
	for(i=0;i<n;i++){
		printf("#%d :",i+1);
		scanf("%d",&intArray[i]);
	}
	printf("Adjacent pairs with positive sum\n");
	int counter=0;
	if(n%2==0){
		for(i=0;i<n;i=i+2){
			if(intArray[i]+intArray[i+1]>0){
				counter = counter +1;
				printf("%d %d\n",intArray[i],intArray[i+1]);		
			}
		}
	printf("There are %d adjacent pairs with positive sum",counter);
	}else{
		for(i=0;i<n-1;i=i+2){
			if(intArray[i]+intArray[i+1]>0){
				counter = counter +1;
				printf("%d %d\n",intArray[i],intArray[i+1]);		
			}
		}
	printf("There are %d adjacent pairs with positive sum\n",counter);
	printf("Due to array's length, the last element of array (%d) has been excluded!!",intArray[n-1]);
	}
}
void exercise4(){
	 //EXERCISE 4
	int i,j,n;
	printf("How many integers: ");
	scanf("%d",&n);
	int intArray[n];
	for(i=0;i<n;i++){
		printf("#%d :",i+1);
		scanf("%d",&intArray[i]);
	}
	printf("Unordered pairs with positive sum\n");
	int counter=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(intArray[i]+intArray[j]>0){
				counter = counter +1;
				printf("%d %d\n",intArray[i],intArray[j]);
			}
		}
	}
	printf("There are %d unordered pairs with positive sum",counter);
}
