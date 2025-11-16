#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int min = 1;
    int max = 100;

    for (int i = 0; i < 10; i++)
    {
        int randomNum1 = (rand() % (max - min +1)) + min;
        int randomNum2 = (rand() % (max - min +1)) + min;
        int randomNum3 = (rand() % (max - min +1)) + min;

        printf("%d %d %d\n", randomNum1, randomNum2, randomNum3);
    }
    
    return 0;
}
