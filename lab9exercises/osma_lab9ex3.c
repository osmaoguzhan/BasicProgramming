
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
struct Point{
    int X;
    int Y;
};
void fill(struct Point *points,int n);
int findClosest(struct Point *points,int n);

int main(){
    int temp;
    int n;
    printf("Choose the size of structer array: ");
    scanf("%d",&n);
    struct Point points[n];
    fill(points,n);
    for(int i=0;i<n;i++){
        printf("X : %d Y : %d\n",points[i].X, points[i].Y);
    }
    printf("-----------------------------\n");
    temp = findClosest(points,n);
    printf("The closest point to origin is (%d,%d)",points[temp].X,points[temp].Y);
    return 0;
}

void fill(struct Point *points,int n){
    srand(time(NULL));
    for(int i = 0 ; i<n;i++){
        points[i].X = (rand()% (100 - (-100) + 1))-100;
        points[i].Y = (rand()% (100 - (-100) + 1))-100;
    }
}
int findClosest(struct Point *points,int n){
 float closest = sqrt((points[0].X*points[0].X)+(points[0].Y*points[0].Y));
    int temp=0;
    for(int i = 1 ; i<n;i++){
        if(closest>sqrt((points[0].X*points[0].X)+(points[0].Y*points[0].Y))){
            closest=sqrt((points[0].X*points[0].X)+(points[0].Y*points[0].Y));
            temp=i;
        }
    }
    return temp;

}
