#include<stdio.h>

int countOdd(int arr[], int n);

int main() {
    int arr[] = {1, 2, 5, 8, 9, 65, 87, 88, 68, 45, 46, 22, 3, 44, 64, 58};
    printf("%d", countOdd(arr, 16));
    return 0;
}

int countOdd(int arr[], int n) {
    int count = 0;
    for(int i=0; i < n; i++) {
        if(arr[i] % 2 == 0){
            count++;
        }
    }
    return count;
}