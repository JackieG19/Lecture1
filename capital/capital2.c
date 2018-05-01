#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include <ctype.h> // https://reference.cs50.net/ctype/islower

int main(void)
{
    string s = get_string("before: "); // give the before string
    printf("after: "); // now print the string after making some changes

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }

    printf("\n");
}