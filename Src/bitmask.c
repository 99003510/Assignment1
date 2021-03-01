#include "bitmask.h"
int set(int a, int r)
{
    return (a | (1 << (r - 1)));
}

// Function to clear the rth bit of 'a'
int clear(int a, int r)
{
    return (a & (~(1 << (r - 1))));
}

// Function to toggle the rth bit of 'a'
int flip(int a, int r)
{
    return (a ^ (1 << (r - 1)));
}
