#include<stdio.h>
#include<cs50.h>

int main(void)
{
    string s = get_string("Name: ");
    int n = 0;

    while (s[n] != '\0') // initializing n to 0, if not...
    {
        n++; //...increment
    }
    printf("%i\n");
}


// ex. Stelios goes through while, counting the number of characters in a string
// n store the value 7