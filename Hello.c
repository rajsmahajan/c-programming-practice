#include<stdio.h>
#include<math.h>

float triangleArea(float x, float y);
float rectangleArea(float a, float b);

/* to find area of triangle use x and y.
   to find area of recrangle use a and b.
*/

int main() {
    printf("-:Area of Triangle:- \n");
    float x, y;
    printf("enter x :");
    scanf("%f", &x);
    printf("enter y :");
    scanf("%f", &y);
    printf("Area of triangle is : %f \n", triangleArea(x,y));


    printf("-:Area of Rectangle:- \n");
    float a, b;
    printf("enter a : ");
    scanf("%f", &a);
    printf("enter b : ");
    scanf("%f", &b);
    printf("Area of rectangle is : %f \n", rectangleArea(a,b));

    return 0;
}

float triangleArea(float x, float y) {
    return 0.5 * x * y;
}
float rectangleArea(float a, float b) {
    return a * b;
}
