#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string s = get_string("input: ");
    printf("output: ");

    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c %i\n", s [i], (int) s[i]);
    }
}

// input: jack
// output: j 106
// a 97
// c 99
// k 107

/*NOTE
type casting - variable convert from on to the other
*/