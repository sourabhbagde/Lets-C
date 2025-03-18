#include<stdio.h>
    // Compute total owed, assuming 8% tax and 15% tip
int main() {
    //int subtotal = printf("Subtotal: $%.02d\n", (38 + 40 + 30)); here -> subtotal is not 108
    //Instead of storing 108, subtotal will hold the number of characters printed.
    //printf() does not return the value to be printed; it returns the number of characters printed.
    float subtotal = 38 + 40 + 30;
    printf("Subtotal: $%.02f\n", subtotal);
    float tax = subtotal * .08;
    printf("Tax: $%.02f\n", tax);
    float tip = subtotal * .15;
    printf("Tip: $%.02f\n", tip);
    float total = (subtotal + tax + tip);
    printf("Total: $%.02f\n", total);
    return 0;
}