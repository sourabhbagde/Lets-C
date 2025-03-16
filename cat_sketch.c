#include <stdio.h>
// declaration of void function named cat.
void cat();
// definition of cat.
void cat(){
    // the backslash (\) prevents "" to detect as a message acts as an escape sequence.
    printf("/\\   /\\\n .   . \n   -  \n \"\" \"\"\n");
    // no return since function is an void declared.
}
int main(){
    // calling the cat.
    cat();
    return 0;
}

