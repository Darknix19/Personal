#include <stdio.h>

int main(){
    int n, num = 3, num1 = 0, num2 = 1, next, temp;

    printf("\nWELCOME TO THE FIBONACCI SEQUENCE\n\n");
    printf("How many numbers would you like to see? ");
    scanf("%d", &n);

    printf("1: %d\n2: %d\n", num1, num2);
    for (int i = 0; i < n; i++)
    {
        next = num1 + num2;
        printf("%d: %d\n",num, next);

        temp = num2;
        num2 = next;
        num1 = temp;

        num++;

    }
    

    return 0;
}
