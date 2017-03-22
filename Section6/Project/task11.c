#include <stdio.h>

int main(void)
{
    int number;
    float sum, part_sum;
    printf("Input the number: ");
    scanf("%d", &number);

    part_sum = 1.0f;
    sum = 1.0f;
    for(int count = 1; count <= number; count++){
        for(int i = 1; i <= count; i++){
            part_sum = part_sum * i;
        }
        sum = sum + 1 / part_sum;
        part_sum = 1.0f;
    }
    printf("%f\n", sum);
    return 0;
}