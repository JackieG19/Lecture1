#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n; // variable called n store in int

    do
    {
        n = get_int("Positive Number: "); // prompt user for a positive number
    }
    while (n <= 0);

    for (int i = 0; i < n; i++) // print out tht many bricks
    {
        printf("#\n");
    }
}

// Will not print until you give a positive number
// Positive Number: -5
// Positive Number: 0
// Positive Number: 3
// #
// #