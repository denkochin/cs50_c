#include <stdio.h>

// & - 'address off' operator. What address the var is stored in.
// * - 'look inside address'. Go into the address.
// *p - declaring a pointer. Var that storing a pointer.

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%p\n", p);
}