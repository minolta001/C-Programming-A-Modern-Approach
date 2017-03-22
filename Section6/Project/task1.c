#include <stdio.h>

int main(void)
{
    float largest, number;
    largest = 0.0f;
    for(;;){
        printf("Enter a number: ");
        scanf("%f", &number);
        if(number <= 0.0f){
            printf("The largest number entered was %.3f\n", largest);
            break;
        }

        else if(number > largest){
            largest = number;
        }
        else{
            continue;
        }
    }
    return 0;
}