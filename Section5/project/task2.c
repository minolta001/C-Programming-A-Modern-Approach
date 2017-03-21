#include <stdio.h>

int main(void)
{
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hour, &minute);
    
    if(hour >= 0 && hour <= 11){
        if(minute == 0){
            printf("Equivalent 12-hour time: %d:%d0 AM\n", hour, minute);
        }
        else{
            printf("Equivalent 12-hour time: %d:%d AM\n", hour, minute);
        }
    }
    
    else if(hour >= 13 && hour <= 23){
        if(minute == 0){
            printf("Equivalent 12-hour time: %d:%d0 PM\n", hour - 12, minute);
        }
        else{
            printf("Equivalent 12-hour time: %d:%d PM\n", hour - 12, minute);
        }
    }

    else if(hour == 12){
        if(minute == 0){
            printf("Equivalent 12-hour time: %d:%d0 PM\n", hour, minute);
        }
        else{
            printf("Equivalent 12-hour time: %d:%d PM\n", hour, minute);
        }
    }

    return 0;
}