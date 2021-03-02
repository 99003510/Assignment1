#include "bitmask.h"

int set(int a, int r)
{
    return (a | (1 << (r - 1)));
}

// clear the bit r
int clear(int a, int r)
{
    return (a & (~(1 << (r - 1))));
}

//toggle
int flip(int a, int r)
{
    return (a ^ (1 << (r - 1)));
}

int query(int a, int r)
{
    return (a & (1 << (r-1)));
}