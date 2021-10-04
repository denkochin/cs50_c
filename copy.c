#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Below getting the address of the first char of s,
    //assigning it to t, changing the first letter of t and seing
    //that s is also changed
    //So s and t are the same addresses
    //char *s = get_string("s: ");

    //char *t = s;

    //t[0] = toupper(t[0]);

    //printf("s: %s\n", s);
    //printf("t: %s\n", t);

    // Below the right copy implementation by allocating memory
    //and looping through s
    char *s = get_string("s: ");

    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        return 1;
    }

    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
        //*(t+i) = *(s+i)
    }
    // adding check of user input
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
        //*t = toupper(*t);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

}