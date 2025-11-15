#include <stdio.h>

int main(){
    int num,size,result,n = 1;

    printf("\nWELCOME TO THE TIMES TABLE GENERATOR!\n\n");

    printf("What number's table would you like? ");
    scanf("%d", &num);

    printf("Enter till which number you want the table: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        result = num * n;

        printf("%d x %d = %d\n", num, n, result);
        n++;
    }
    

    return 0;
}
