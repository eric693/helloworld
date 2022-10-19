#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <helpers.h>

bool search(int value, int values[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (values[i] == value)
            return true;
    }
    return false;
}