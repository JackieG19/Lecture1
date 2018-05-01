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
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - ('a' - 'A'));
        }

        else
        {
            printf("%c", s[i]);
        }
    }

    printf("\n");
}


// the condition: n = strlen(s);
// n is variable, probably and int
// = is assignment from right to left
// strlen is a function that returns the length of the string
// seems to be storing the number of character in whatever the string the user typed in

// if (s[i] = if the i'th charater of s is
// >= 'a' =  greater than or equal to a lowercase a
// && s[i] <= 'z') = and less than or equal to z

// printf("%c", s[i] = print out the result of
// - ('a' - 'A'); = minus a (ascii = 97) - A (ascii = 65) = 32


