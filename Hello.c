#include<stdio.h>

float calcuPersentage(float science, float math, float sanskrit, float english, float marathi);

int main() {
    float science, math, sanskrit, english, marathi;
    printf("enter marks in science :");
    scanf("%f", &science);

    printf("enter marks in math : ");
    scanf("%f", &math);

    printf("enter marks in sanskit : ");
    scanf("%f", &sanskrit);

    printf("enter marks in english :");
    scanf("%f", &english);

    printf("enter marks in marathi : ");
    scanf("%f", &marathi);

    printf("persentage is : %f \n ", calcuPersentage(science, math, sanskrit, english, marathi));  
    return 0;
}

float calcuPersentage(float science, float math, float sanskrit, float english, float marathi) {
    return ((science + math + sanskrit + english + marathi) / 5.0 );  
}
