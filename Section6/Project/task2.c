#include <stdio.h>

int main(void)
{
    int m, n, temp;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    for(; n > 0; temp = n, n = m % n, m = temp);
    printf("Greatest common divisor: %d\n", m);
    return 0;
}