#include<stdio.h>

int main() {
    // 2 x 3
    int marks[2] [3];
    marks[0][0] = 88;
    marks[0][1] = 90;
    marks[0][2] = 92;

    marks[1][0] = 88;
    marks[1][1] = 90;
    marks[1][2] = 92;
    
    printf("%d", marks[0][2]);

    return 0;
}