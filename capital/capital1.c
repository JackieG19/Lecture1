#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include <ctype.h> // https://reference.cs50.net/ctype/islower

int main(void)
{
    string s = get_string("before: "); // give the before string
    printf("after: "); // now print the string after making some changes

    for (int i = 0, n = strlen(s); i < n; i++)
    { // islower - a function that is returning a boolean value of a yes/no or true/false
        if (islower(s[i]))
        {
           printf("%c", toupper(s[i]));
        }

        else
        {
            printf("%c", s[i]);
        }
    }

    printf("\n");
}