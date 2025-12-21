#include <stdio.h>
int main()
{
    // all these variable gets memory allocated on stack
    int a;
    int b[10];
    int c = 20;
    int d[n];
    
    // This memory for 20 integers is allocated on heap
    int *ptr = new int[20];
    
    return 0;
}