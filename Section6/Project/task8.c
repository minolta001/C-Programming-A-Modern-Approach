#include <stdio.h>

int main(void)
{
    int days, start;
    int i, j, count;
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

    for(i = 1; i < start; i++){
        printf("   ");
    }
    count = i;

    for(j = 1; j <= days && count <= 7; j++, count++){
        if(count == 7 || j == 31){
            printf("%2d\n", j);
            printf("%d***", count);
            count = 0;
        }
        else{
            printf("%2d ", j);
            printf("%d***", count);
        }
    }
    return 0;

}