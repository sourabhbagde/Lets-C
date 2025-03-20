#include<stdio.h>

// Function prototypes are especially useful when the function is defined after main(), 
// but you still want to call it from main() or another function.
// Without a prototype, the compiler will assume default behaviors (which is deprecated and unsafe in modern C).
int retirement_age(int age);
// int retirement_age(void); -> function prototype used before the main, as parameterized void at defintion of function.
// int retirement_age(int age); ->for parameterized declaration.
int retirement_age(int age)
{
    int age_count = age;
    int retirement = 65;
    int age_differ = 0;
    if (age_count < retirement)
    {
        age_differ = retirement - age_count;
        printf("You have %d years left until retirement.\n", age_differ);
        return 0;
    }
    else{
        printf("you have already retired...\n");
        return 0;
    }
}

int main(){
    int age;
    printf("How old are you?\n");
    // here, %2d is used if want to take only first two digits as the input.
    scanf("%d",&age);
    if (age < 18){
        printf("You are not yet working age \n");
        return 0;
    }
    else if (age > 100)
    {
        printf("Please select appropriate age group. \n");
        return 0;
    }
    else {
        retirement_age(age);
        return 0;
    }
}
