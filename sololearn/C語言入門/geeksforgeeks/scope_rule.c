#include <stdio.h>

// Global variable
int global = 5;

// global variable accessed from
// within a function
void display()
{
    printf("%d\n", global);
}

// main function
int main()
{
    printf("Before change within main: ");
    display();

    // changing value of global
    // variable from main function
    printf("After change within main: ");
    global = 10;
    display();
}