#include <stdio.h>
void exercise1();
void exercise2();
void exercise3();
void exercise4();
void exercise6();
void exercise7a();
void exercise7b();

int main(){
	//All exercises are seperated to different void type functions.
	//exercise1();	
	//exercise2();
	//exercise3();
	//exercise4();
	//exercise5();
	//exercise6();
	//exercise7a();
	//exercise7b();
	getch();
	return 0;
}

void exercise1(){
	//EXERCISE 1
	int first, second, n, Q;
	printf("---------------------------------\nEXERCISE 1 (a)(b)\n---------------------------------");
	printf("\nFirst input:");
	scanf("%d",&first);
	printf("Second input:");
	scanf("%d",&second);
	int i;
	printf("\nNumber from %d to %d are:\n",first,second);
	for(i=first;i<=second;i++){
		printf("%d ",i);
	}
	printf("\nNumber from %d to %d are:\n",second,first);
	for(i=second;i>=first;i--){
		printf("%d ",i);
	}
	printf("\n---------------------------------\nEXERCISE 1 (c)\n---------------------------------");
	printf("\nFirst input:");
	scanf("%d",&first);
	printf("Second input:");
	scanf("%d",&second);
	printf("Enter n:");
	scanf("%d",&n);
	printf("\nNumbers from %d to %d every %d are:\n",first, second, n);
	for(i=first;i<=second;i=i+n){
		printf("%d ",i);
	}
	printf("\n---------------------------------\nEXERCISE 1 (d)\n---------------------------------");
	printf("\nFirst input:");
	scanf("%d",&first);
	printf("Second input:");
	scanf("%d",&second);
	printf("Enter Q:");
	scanf("%d",&Q);
	printf("\nNumbers from %d to %d divisible by %d are:\n",first, second, Q);
	for(i=first;i<=second;i++){
		if(i%Q==0){
			printf("%d ",i);	
		}
	}
}
void exercise2(){
	//EXERCISE 2 
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Multiplication table up to 9 for %d\n",n);
	int i;
	for(i=1;i<10;i++){
		printf("%d * %d = %d\n",i,n,n*i);
	}
}
void exercise3(){
	//EXERCISE 3
	int n,m,i;
	printf("Enter two positive integers:\n");
	scanf("%d",&n);
	scanf("%d",&m);
	printf("%d multiples of %d\n",m,n);
	for(i=1;i<=m;i++){
		printf("%d ",n*i);
	}
}
void exercise4(){
	//EXERCISE 4
	int n,m,i;
	printf("Enter two positive integers:\n");
	scanf("%d",&n);
	scanf("%d",&m);
	printf("multiples of %d smaller than %d\n",n,m);
	for(i=1;i<=m;i++){
		if(i*n<m){
			printf("%d ",n*i);	
		}
	}
}
void exercise5(){
	//EXERCISE 5
	int n,i;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=2;i*i<=n;i=i+2){
		printf("%d ",i*i);
	}
}
void exercise6(){
	//EXERCISE 6
	int n,i,j,k,m;
	printf("-------------------------------\nEXERCISE 6 (a)\n-------------------------------");
	printf("\nEnter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n-------------------------------\nEXERCISE 6 (b)\n-------------------------------\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n-------------------------------\nEXERCISE 6 (c)\n-------------------------------\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if((i+j)>n){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n-------------------------------\nEXERCISE 6 (d)\n-------------------------------\n");
	for(i=1;i<=n*2;i=i+2){
		for(j=1;j<=n*2;j++){
			if((i+j)>n*2){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
void exercise7a(){
	//EXERCISE 7 (a)
	int m,n,i,j;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter m:");
	scanf("%d",&m);
	for(i=n;i<=m;i++){
		for(j=n;j<=m;j++){
			printf("%d ",i*j);
		}
		printf("\n");
	}
}
void exercise7b(){
	//EXERCISE 7 (b)
	int m1,n1,m2,n2,i,j;
	printf("Enter n1:");
	scanf("%d",&n1);
	printf("Enter m1:");
	scanf("%d",&m1);
	printf("Enter n2:");
	scanf("%d",&n2);
	printf("Enter m2:");
	scanf("%d",&m2);
	for(i=n2;i<=m2;i++){
		for(j=n1;j<=m1;j++){
			printf("%d ",i*j);
		}
		printf("\n");
	}
}
