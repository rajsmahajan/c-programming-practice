#include <stdio.h>

int isPrime(int num);
int countPrime(int arr[], int n);

int main() {
    int arr[] = {1, 2, 5, 8, 9, 65, 87, 88, 68, 45, 46, 22, 3, 58};
    
    printf("%d", countPrime(arr, 16));
    return 0;
}

int isPrime(int num) {
    if (num <= 1) return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int countPrime(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    return count;
}