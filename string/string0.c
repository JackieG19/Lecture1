#include<stdio.h>
#include<cs50.h>
#include<string.h> // https://reference.cs50.net/string/strlen

int main(void)
{
    string s = get_string("input: ");
    printf("output: ");

    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c\n", s [i]);
    }
}


// printf("%c", s [i]);
// input: jack
// output: jack~/workspace/

// printf("%c\n", s [i]);
// input: jack
// output: j
// a
// c
// k