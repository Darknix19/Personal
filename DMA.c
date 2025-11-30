#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 0;

   //malloc() = A function that dynamically allocates a specified number of bytes in memory

    /*printf("Enter the number of grades: ");
    scanf("%d", &num);

    char *grades = malloc(num * sizeof(char));

    if (grades == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }
    
    for (int i = 0; i < num; i++)
    {
        printf("Enter Grade #%d: ", i+1);
        scanf(" %c", &grades[i]);
    }

       for (int i = 0; i < num; i++)
    {
        printf("%c\n", grades[i]);
    }
    

    free(grades); //returning rented space bacck to OS
    grades = NULL; //avoids dangling pointer */



    //calloc() = Allocates memory dynamically and sets all allocated bytes to 0, slower but less bugs
    //calloc(#, size)

    /*printf("Enter number of players: ");
    scanf("%d", &num);

    int *scores = calloc(num, sizeof(int));

    if (scores == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < num; i++)
    {
        printf("Enter score #%d: ", i+1);
        scanf(" %d", &scores[i]);
    }
    

    for (int i = 0; i < num; i++)
    {
        printf(" %d", scores[i]);
    }
        

    free(scores);
    scores = NULL;*/



    //realloc() = Resize previous allocated memory
    //realloc(ptr, bytes)

    printf("Enter number of prices: ");
    scanf("%d", &num);

    float *prices = malloc(num * sizeof(float));

    if (prices == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < num; i++)
    {
        printf("Enter price #%d: ", i+1);
        scanf("%f", &prices[i]);
    }

    int newnum = 0;

    printf("Enter a new number of prices: ");
    scanf("%d", &newnum);
    
    float *temp = realloc(prices, newnum * sizeof(float));

    if (temp == NULL)
    {
        printf("Could not reallocate memmory\n");
    }
    else{
        prices = temp;

        for (int i = num; i < newnum; i++)
        {
        printf("Enter price #%d: ", i+1);
        scanf("%f", &prices[i]);
        }

        for (int i = 0; i < newnum; i++)
        {
        printf(" $%.2f", prices[i]);
        }
    }

    free(prices);
    prices = NULL;

    return 0;
}
