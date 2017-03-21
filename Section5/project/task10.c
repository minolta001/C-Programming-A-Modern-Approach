#include <stdio.h>

int main(void)
{
    int ten, number;
    printf("Enter numerical grade: ");
    scanf("%d", &number);
    if(number > 100 || number < 0){
        printf("Error input\n");
    }
    else{
        ten = number / 10;
        switch(ten){
            case 10: 
            case 9: printf("Letter grade: A\n");
                    break;
            case 8: printf("Letter grade: B\n");
                    break;
            case 7: printf("Letter grade: C\n");
                    break;
            case 6: printf("Letter grade: D\n");
                    break;
            default: printf("Letter grade: F\n");
                    break;  
        }
    }
    return 0;
    
}