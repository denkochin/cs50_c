#include <stdio.h>


// & - 'address off' operator. What address the var is stored in.
// * - 'look inside address'. Go into the address.
// *p - declaring a pointer. Var that storing a pointer.

int main(void)
{
    //int n = 50;
    //int *p = &n;
    //printf("%i\n", *p);

    // char *s - is the actual implementation of string in C
    char *s = "HI!";
    // then s variable is a pointer with the address of a first char of a string
    // then *s is a "go to the address"
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%i\n", *(s+3));
    printf("%c\n", *(s+100000));
}