#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void find_two_largest(int[], int, int*, int*);

int main(void)
{
    int a[SIZE];
    int number;
    int largest, second_largest;

    printf("Input numbers: ");
    for(int i = 0; i < SIZE; i++){
        scanf(" %d", &a[i]);
    }

    largest = 0;
    second_largest = 0;

    find_two_largest(a, SIZE, &largest, &second_largest);
    printf("Largest: %d, second_largest: %d\n", largest, second_largest);

    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i;
    for(i = 0; i < n; i++){
        if(a[i] > *largest){
            *second_largest = *largest;
            *largest = a[i];
        }
        else if(a[i] <= *largest && a[i] > *second_largest){
            *second_largest = a[i];
        }
    }
}