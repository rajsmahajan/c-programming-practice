#include<stdio.h>

int main() {
    int Items[3]; 
    int total;
    printf("Enter Price of Item 1 : ");
    scanf("%d", &Items[0]);

    printf("Enter Price of Item 2 : ");
    scanf("%d", &Items[1]);

    printf("Enter Price of Item 3 : ");
    scanf("%d", &Items[2]);

    printf("Item 1 = %d, Item 2 = %d, Item 3 =%d\n", Items[0], Items[1], Items[2]);

    total = Items[0]+Items[1]+Items[2];
    printf("Final Value(with GST):%d\n", total + total * 18 / 100);
    printf("Thank You:)");

    return 0;
}