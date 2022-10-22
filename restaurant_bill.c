// program that compute a bill with tax and tip as command line argument
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// main accep 2 argument for tax and tip, more will return fasle if none will use default value
int main(int argc, double *argv) {
    double tax_rate = 9.75;
    double tip = 0.0;
    if (argc > 2) {
        printf("Too many arguments supplied.\n");
        return EXIT_FAILURE;
    } else if (argc == 2) {
        tax_rate = argv[0];
        tip = argv[1];
    }

    // random select 4 meal to choose
    time_t t;
    srand((unsigned) time(&t));
    int choose_menu = rand() % 4;
    char menu[4][10] = {
        "Salad",
        "Soup",
        "Sandwich",
        "Pizza"
    };
    double price[4] = {9.95, 4.55, 13.25, 22.35};
    // display meal cost
    
    // display tax amount
        // if no argument default will be 9.75%
        // tax = cost*(tax/100)
    // display tip amount
        // if no argument default will be 0%
        // tip = cost*(tip/100)
    // display total cost
    return EXIT_SUCCESS;
}