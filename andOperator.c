#include <stdio.h>
#include <stdlib.h> // for malloc

// a function to do AND operation on operands a,b.
int andOperator(int *a, int *b, int bits){
    
    for (int j = 0; j < bits; j++){
        printf("Printing...%d %d\n", a[j], b[j]);
    }
        return 0;
}


int main(){
    // to iterate the input from user
    int bits;
    printf("Please enter number of bits want to operate:\n");
    scanf("%d", &bits);
    printf("Please enter array of 1s or 0s for variable a:");
    // a pointer is initialized to use malloc and allocate the memory to this pointer.
    int *a_operand = malloc(sizeof(int) * bits);
    // adding a check for memory allocation.
    if (a_operand == NULL){
        printf("Memory is not allocated...");
        return 1;
    }
    // on iterating, user input is taken.
    for (int i = 0; i < bits; i++)
    {
        scanf("%d",&a_operand[i]);
    }
    // asking user to get second operand input.
    // int newbits = bits + bits;
    printf("Please enter array of 1s or 0s for variable b:");
    // using a temporary pointer to reallocate such that cause no memory leaks.
    // how? - if this realloc failed without temp, ab_operand will lose the reference to original data.
    // so, if temp is used and failed, still original reference to ab_operand is kept safe.
    // int *temp = realloc(ab_operand, sizeof(int) * newbits);
    // if (temp == NULL){
    //     printf("Memory is not reallocated...");
    //     return 1;
    // }

     // a pointer is initialized to use malloc and allocate the memory to this pointer.
    int *b_operand = malloc(sizeof(int) * bits);
    // adding a check for memory allocation.
    if (b_operand == NULL){
        printf("Memory is not allocated...");
        return 1;
    }
    // on iterating, user input is taken.
    for (int i = 0; i < bits; i++)
    {
        scanf("%d",&b_operand[i]);
    }
    andOperator(a_operand, b_operand, bits);
    free(a_operand);
    a_operand = NULL;
    free(b_operand);
    b_operand = NULL;
}