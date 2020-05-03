#ifndef BLANK_H_INCLUDED
#define BLANK_H_INCLUDED
struct Point{
    int X;
    int Y;
};
struct CircleData{
    int r;
    int cX;
    int cY;
};
void fill(struct Point *points,int n);
struct CircleData create(struct CircleData circle);
int calculate(struct Point *points,struct CircleData circle ,int n);
void fillNew(struct Point *newPoints,struct Point *points ,struct CircleData circle ,int n);
void displayPoints(struct Point *points,int n);
#endif // BLANK_H_INCLUDED
