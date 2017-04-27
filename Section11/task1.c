#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void pay_amount(int, int*, int*, int*, int*);

int main(void)
{
    int dollars, twenties, tens, fives, ones;
    printf("Input the number of money: ");
    scanf("%d", &dollars);
    pay_amount(dollars, &twenties, &tens, &fives, &ones);
    printf("Twenties: %d, tens: %d, fives: %d, ones: %d\n", 
    twenties, tens, fives, ones);
    
    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    dollars = dollars - 20 * (*twenties);
    *tens = dollars / 10;
    dollars = dollars - 10 * (*tens);
    *fives = dollars / 5;
    dollars = dollars - 5 * (*fives);
    *ones = dollars;
}