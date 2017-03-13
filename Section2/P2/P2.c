#include <stdio.h>
#include <MATH.h>

int main (void)
{
    float v;
    int r;
    printf("Please enter the ridus: ");
    scanf("%d", &r);
    v = 4.0f / 3.0f * M_PI * r * r *r;
    printf("The result is %f\n", v);
    return 0;
}