#include "osma_functions.c"
#include "osma_functions_h.h"

int main()
{
    int n;
    struct CircleData circle;
    circle = create(circle);
    printf("Choose the size of struct array: ");
    scanf("%d",&n);
    struct Point points[n];
    fill(points,n);
    displayPoints(points,n);
    printf("--------------------\n");
    printf("Radius : %d\n",circle.r);
    printf("Center coordinate of circle : (%d,%d)\n",circle.cX,circle.cY);
    printf("--------------------\n");
    int howMany = calculate(points,circle,n);
    printf("%d point(s) is/are inside the circle\n",howMany);
    if(howMany==0){
        printf("All points are out of circle!\n");
    }else{
        struct Point newPoints[howMany];
        fillNew(newPoints,points, circle,n);
        printf("---------------------------------\n");
        printf("NEW ARRAY FILLED BY POINTS WHICH ARE INSIDE THE CIRCLE\n");
        printf("---------------------------------\n");
        displayPoints(newPoints,howMany);
    }

    return 0;
}

