#include<stdio.h>
int main(){
    printf("A \"quoted\" string is \n'much' better if you learn\nthe rules of \"escape sequences.\" \n");
    printf("\n");
    // here, \\\" sequence escape is opened and closed - so used two sequences \\ and third \ will be printed and not escaped.
    printf("Also, \"\" represents an empty string.\nDon't forget: use \\\" instead of \" !\n'' is not the same as \"\n");
    return 0;
}