#include <stdio.h>

// & - 'address off' operator. What address the var is stored in.
// * - 'look inside address'. Go into the address.

int main(void)
{
    int n = 50;
    printf("%p\n", &n);
}