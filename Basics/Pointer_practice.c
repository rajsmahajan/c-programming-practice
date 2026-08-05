#include<stdio.h>

int main() {
    char Name;
    char R;
    char Papa;
    char Aai;
    printf("Hello...\n");
    printf("Tell me Name of Person, You want to Call : ");
    scanf("%c", &Name);
    
    if(Name == 'R'){
        printf("Ok...\n");
        printf("Raj's Phone Number : 87******92\n ");
    }else if(Name == 'Papa'){
        printf("Ok...\n");
        printf("Papa's Phone number is : 98******32\n");
    } else if(Name == 'Aai'){
        printf("Ok...\n");
        printf("Aai's Phone Number : 88******21");
    }else{
        printf("Name/Number is not available ...\n");
        printf("Sorry, Tell me another Name. \n");
    }

    printf("Thank You.\n");
    return 0;
}

