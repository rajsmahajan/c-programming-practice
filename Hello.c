#include<stdio.h>

void CalculatePrice(float value);

int main() {
    float value ;
    printf("enter value : ");
    scanf("%f", &value);
    CalculatePrice(value);
    printf("value is : %f \n", value);
    return 0;
}

void CalculatePrice(float value) {
    value = value + (0.18 * value);
    printf("final price : %f \n", value);
}