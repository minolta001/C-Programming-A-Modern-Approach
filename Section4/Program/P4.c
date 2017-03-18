#include <stdio.h>

int main(void)
{
    int num;
    int first, second, third, fourth, fifth;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);
    fifth = num % 8;
    fourth = num / 8 % 8;
    third = num / 8 / 8 % 8;
    second = num / 8 / 8 / 8 % 8;
    first = num / 8 / 8 / 8 / 8 % 8;

    printf("%d%d%d%d%d\n", first, second, third, fourth, fifth);
    return 0;
}