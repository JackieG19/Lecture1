#include<stdio.h>
#include<cs50.h>

int main(void)
{
    string name = get_string("Name: ");
    //printf("hello world\n");
    printf("hello, %s\n", name);
}

// Name: jackie - type in word
// hello, jackie - prints out

// string = gives the variable
// store a string called name
// function called get_string which gets a string for user
// promting the word "Name" and then return it

//  %s is a place holder = hello, put word here ________, whatever comes after the comma, (variable/ value)