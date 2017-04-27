#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>

#define length 10

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int split(int a[], int low, int high)
{
    int partition = a[low];

    for(;;){
        while(low < high && partition <= a[high]) high--;
        
        if(low >= high) break;
        
        a[low] = a[high];
        low++;

        while(low < high && a[low] <= partition) low++;

        if(low >= high) break;

        a[high] = a[low];
        high--;
    }
    a[high] = partition;
    return high;
}

void quicksort(int a[], int low, int high)
{
    int middle;

    if(low >= high) return;
    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
    return;
}

int main(void)
{
    int input_char[length];

    printf("Please input numbers: ");

    for(int i = 0; i < length; i++){
        scanf("%d", &input_char[i]);
    }
    quicksort(input_char, 0, length - 1);

    for(int i = 0; i < length; i++){
        printf("%d ", input_char[i]);
    }

    printf("\n");
    return 0;
}
