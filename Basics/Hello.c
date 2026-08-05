#include<stdio.h>
void introR();
void introM();

int main() {
    printf("enter 'R' if you want intro of 'Raj' enter 'M' for intro of 'Moksha':.");
    char ch;
    scanf("%c", &ch);

    if(ch == 'R') {
        introR();
    }else{
        introM();
    }
    return 0;
}

void introR() {
    printf("Hi may name is raj\n");
    printf("i am studying B.tech in DPGU,Pimpri. \n");
    printf("i am from chopda, jalgoan\n");
}

void introM() {
    printf("hi my name is moksha\n");
    printf("i am studying in 6th std.\n");
    printf("i am from chopda,jalgoan\n");
}