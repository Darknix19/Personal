#include <stdio.h>

void birthday(int* age); //prototype

int main(){

    int age = 24;
    int *pAge = &age;

    birthday(pAge);

    printf("You are %d years old", age);

    return 0;
}

void birthday(int* age){
    (*age)++;
}
