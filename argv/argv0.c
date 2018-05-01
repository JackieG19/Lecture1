#include<stdio.h>
#include<cs50.h>

// argc = how many arguments are the file has
// argv = how many agrument can pass

int main(int argc, string argv[]) // 2 input, a string and an array
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]); // argv[1] = an array of some length of string
    }
    else
    {
        printf("hello, world\n");
    }
}

// if
// $ ./argv0 jack
// hello, jack

// else
// $ ./argv0
// hello, world
