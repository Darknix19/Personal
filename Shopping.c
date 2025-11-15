#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int quantity = 0, n;
    char item[50] = "";
    char currency = '$';
    float price = 0, total = 0;

    printf("How many items are you getting: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("What item would you like to buy? ");
        fgets(item, sizeof(item), stdin);
        item[strcspn(item, "\n")] = '\0';

        printf("What is the price of the item? ");
        scanf("%f", &price);

        printf("How many do you want? ");
        scanf("%d", &quantity);
        getchar();

        total += price * quantity;
    }

    printf("Your total bill is %c%.2f\n", currency, total);

    return 0;
}
