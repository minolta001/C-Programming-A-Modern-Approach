#include <stdio.h>

int main(void)
{
    int number, hun, ten, one, result;
    printf("Enter three digit number: ");
    scanf("%d", &number);
    hun = number / 100;
    ten = number % 100 / 10;
    one = number % 10;
    
    result = one * 100 + ten * 10 + hun;
    printf("The reversal is: %d\n", result);
    return 0;
}