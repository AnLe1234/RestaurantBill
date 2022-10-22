// program that compute a bill with tax and tip as command line argument
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// main accep 2 argument for tax and tip, more will return fasle if none will use default value
int main(int argc, char *argv[]) {
    double tax_rate = 9.75;
    double tip_rate = 0.0;
    if (argc > 3) {
        printf("Too many arguments supplied.\n");
        return EXIT_FAILURE;
    } else if (argc == 3) {
        tax_rate = atof(argv[1]);
        tip_rate = atof(argv[2]);
    }

    typedef struct {
    char *name;
    double price;
    } Menu;

    const Menu MenuTable[] = {
        {"Salad", 9.95},
        {"Soup", 4.55},
        {"Sandwich", 13.25},
        {"Pizza", 22.35}
    };
    // random select 4 meal to choose
    time_t t;
    srand((unsigned)time(&t));
    int choose_menu = rand() % 4;
    // display meal cost
    printf("Price of %s: $%.2f\n", MenuTable[choose_menu].name, MenuTable[choose_menu].price);
    // display tax amount
    // if no argument default will be 9.75%
    // tax = cost*(tax_rate/100)
    double tax = MenuTable[choose_menu].price * (tax_rate / 100);
    printf("Tax amount: $%.2f\n", tax);
    // display tip amount
    // if no argument default will be 0%
    // tip = cost*(tip_rate/100)
    double tip = MenuTable[choose_menu].price * (tip_rate / 100);
    printf("Tip amount: $%.2f\n", tip);
    // display total cost
    printf("Total price: $%.2f\n", (MenuTable[choose_menu].price + tax + tip));
    return EXIT_SUCCESS;
}