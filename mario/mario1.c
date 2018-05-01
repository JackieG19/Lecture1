#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int i;
    int n = get_int("Number: ");

    for (i = 0; i < n; i++)
    {
     printf("#\n");
    }
}

// Number: 5 - type in number
// prints out:
// #
// #
// #
// #
// #