#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void split_date(int, int, int*, int*);

int main(void)
{
    int day_of_year, year, month = 0, day = 0;

    printf("Input the day of year: ");
    scanf(" %d", &day_of_year);
    printf("Input the year: ");
    scanf(" %d", &year);

    split_date(day_of_year, year, &month, &day);

    printf("Month: %d, Day: %d\n", month, day);
    return 0;
}

void split_date(int day_of_year, int year, int *month, int *day)
{
    int i;
    bool years4;
    if((year % 4) == 0) years4 = true;
    else years4 = false;

    for(i = 1;; i++){
        switch(i){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                if(day_of_year > 31){
                    *month += 1;
                    day_of_year = day_of_year - 31;
                    break;
                }
                else{
                    *month += 1;
                    *day = day_of_year;
                    return;
                }
            
            case 4: case 6: case 9: case 11:
                if(day_of_year > 30){
                    *month += 1;
                    day_of_year = day_of_year - 30;
                    break;
                }
                else{
                    *month += 1;
                    *day = day_of_year;
                    return;
                }
            
            case 2:
                if(years4 == true){
                    if(day_of_year > 29){
                        *month += 1;
                        day_of_year = day_of_year - 29;
                        break;
                    }
                    else{
                        *month += 1;
                        *day = day_of_year;
                        return;
                    }
                }

                else{
                    if(day_of_year > 28){
                        *month += 1;
                        day_of_year = day_of_year - 28;
                        break;
                    }
                    else{
                        *month += 1;
                        *day = day_of_year;
                        return;
                    }
                }
        }
    }
}