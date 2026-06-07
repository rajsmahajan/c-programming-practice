#include<stdio.h>
#include<math.h>

int main() {
  int n, i, isprime=1;

  printf("enter number :");
  scanf("%d", &n);

  if(n<=1) {
    isprime = 0;
  } 
  else if(n==2) {
    isprime = 1;
  } 
  else if(n % 2 == 0) {
    isprime = 0;
  }
  else{
    for(int i=3; i<= sqrt(n); i = i + 2 ) {
      if(n % i == 0) {
        isprime = 0;
        break;
      }
    }
  }

  if(isprime == 1) {
    printf("%d is PRIME number.  \n", n);
  } else {
    printf("%d is NOT PRIME number. \n", n);
  }

  return 0;
}