#include<stdio.h>
int main() {
    // Compute total owed, assuming 8% tax / 15% tip
    double subtotal;
    printf("What was the meal cost? $");
    //  %lf is only required for scanf().
    //  In printf(), both float and double use %f:
    scanf("%lf", &subtotal);  
    double tax = subtotal * .08;
    double tip = subtotal * .15;
    double total = subtotal + tax + tip;
    // printf("What was the meal cost? $%g\n", subtotal);
    printf("Subtotal: $%.02f\n", subtotal);
    printf("Tax: $%.02f\n", tax);
    printf("Tip: $%.02f\n", tip);
    printf("Total: $%.02f\n", total);
    return 0;
}