#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    int small1, small2, large1, large2;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a < b){
        small1 = a;
        large1 = b;
    }
    else{
        small1 = b;
        large1 = a;
    }

    if(c < d){
        small2 = c;
        large2 = d;
    }
    else{
        small2 = d;
        large2 = c;
    }
    
    if(large1 > large2){
        printf("Largest: %d\n", large1);
    }
    else{
        printf("Largest: %d\n", large2);
    }

    if(small1 < small2){
        printf("Smallest: %d\n", small1);
    }
    else{
        printf("Smallest: %d\n", small2);
    }
    
    return 0;
    
}