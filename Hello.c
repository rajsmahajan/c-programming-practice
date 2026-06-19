#include<stdio.h>
#include<math.h>

int main() {
    float value;
    printf("enter a value :");
    scanf("%f", &value);
    value = value + (0.18 * value);
    printf("final price(with GST) is : %f", value); 
    return 0;
}