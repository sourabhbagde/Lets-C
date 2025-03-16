#include <stdio.h>
void hexagon(){
    // the backslash (\) prevents / to print and acts as an escape sequence.
    // using void functions as no need to return any values or data here - just printing...
    printf( "  ______\n"
            " /      \\\n"
            "/        \\\n"
            "\\        /\n"
            " \\______/\n");
    printf("\n");
    // void functions - no return statement.
}
void lower_half_hexagon(){
    printf( "\\        /\n"
            " \\______/\n"
            "+--------+\n");
    printf("\n");
}
void octagon(){
    printf( "  ______\n"
            " /      \\\n"
            "/        \\\n"
            "|  STOP  |\n"
            "\\        /\n"
            " \\______/\n");
    printf("\n");
}
void upper_half_hexagon(){
    printf( "  ______\n"
            " /      \\\n"
            "/        \\\n"
            "+--------+\n");
    printf("\n");
}
int main(){
    // calling the functions.
    hexagon();
    lower_half_hexagon();
    octagon();
    upper_half_hexagon();
    return 0;
}



