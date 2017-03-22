#include <stdio.h>

int main(void)
{
    int number, i;
    printf("Enter a number: ");
    scanf("%d", &number);
    i = 2;
    while(i * i <= number){
        printf("%d\n", i * i);
        i += 2;
    }
    return 0;
}