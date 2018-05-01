#include<stdio.h>
#include<cs50.h>

// DO NOT USE THIS METHOD !!!!

int main(void)
{
    int n = -1000;

    while (n <= 0);
    {
        n = get_int("Positive Number: ");
    }

    for (int i = 0; i < n; i++)
    {
        printf("#\n");
    }
}