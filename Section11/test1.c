#include <stdio.h>
#include <stdlib.h>

void swap(int*, int*);

int main(void)
{
    int i, j;
    i = 1;
    j = 10;
    printf("%d, %d\n", i, j);
    swap(&i, &j);
    printf("%d, %d\n", i, j);
    return 0;
}

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
    return;
}