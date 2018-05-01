#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n;

    do
    {
        n = get_int("Positive Number: ");
    }
    while (n <= 0);

    for (int i = 0; i < n; i++) // print out this many rows
    {
        for (int j = 0; j < n; j++) // print out this many colums
        {
            printf("#");
        }
    }
    printf("\n");
}

// Positive Number: 6
// ####################################