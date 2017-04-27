#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void reduce(int, int, int*, int*);
int find_gcd(int, int);

int main(void)
{
    int a, b;
    int reduce_numerator = 0, reduce_denominator = 0;
    printf("Enter a fraction: ");
    scanf("%d/", &a);
    scanf("%d", &b);
    reduce(a, b, &reduce_numerator, &reduce_denominator);
    printf("In lowest term: %d/%d\n", reduce_numerator, reduce_denominator);
    return 0;
}

void reduce(int numerator, int denominator, int *reduce_numerator, int *reduce_denominator)
{
    int divisor;
    divisor = find_gcd(numerator, denominator);
    *reduce_numerator = numerator / divisor;
    *reduce_denominator = denominator / divisor;
    return;
}

int find_gcd(int numerator, int denominator)
{
    int temp;
    while(denominator != 0){
        temp = numerator % denominator;
        numerator = denominator;
        denominator = temp;
        find_gcd(numerator, denominator);
    }
    return numerator;
}

