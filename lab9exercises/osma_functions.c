#include "osma_functions_h.h"
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

void fill(struct Point *points,int n){
    srand(time(NULL));
    for(int i = 0 ; i<n;i++){
        points[i].X = (rand()% (100 - (-100) + 1))-100;
        points[i].Y = (rand()% (100 - (-100) + 1))-100;
    }
}

struct CircleData create(struct CircleData circle){
    srand(time(NULL));
    circle.r =rand()%100+1;
    circle.cX =(rand()% (100 - (-100) + 1))-100;
    circle.cY =(rand()% (100 - (-100) + 1))-100;
    return circle;
}

int calculate(struct Point *points,struct CircleData circle ,int n){
    int howMany=0;
    for(int i=0;i<n;i++){
            if((pow(points[i].X-circle.cX,points[i].X-circle.cX)+pow(points[i].Y-circle.cY,points[i].Y-circle.cY))<= pow(circle.r,circle.r)){
                howMany++;
            }
    }
    return howMany;
}
void fillNew(struct Point *newPoints,struct Point *points ,struct CircleData circle ,int n){
    for(int i=0,j=0;i<n;i++){
            if((pow(points[i].X-circle.cX,points[i].X-circle.cX)+pow(points[i].Y-circle.cY,points[i].Y-circle.cY))<= pow(circle.r,circle.r)){
                newPoints[j].X = points[i].X;
                newPoints[j].Y = points[i].Y;
                j++;
             }
    }
}
void displayPoints(struct Point *points,int n){
    for(int i=0;i<n;i++){
        printf("X : %d Y : %d\n",points[i].X, points[i].Y);
    }
}



