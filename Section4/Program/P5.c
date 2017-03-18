#include <stdio.h>

int main(void)
{
    int x, y1, y2, y3, y4, y5, z1, z2, z3, z4, z5;
    int first_sum, second_sum, totel;
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
    &x, &y1, &y2, &y3, &y4, &y5, &z1, &z2, &z3, &z4, &z5);
    first_sum = x + y2 + y4 + z1 + z3 + z5;
    second_sum = y1 + y3 + y5 + z2 + z4;
    totel = 3 * first_sum + second_sum;
    printf("Check the digit: %d\n", 9 - ((totel -1)% 10));
    return 0;
}