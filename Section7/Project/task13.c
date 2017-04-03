#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int count;
    float result, length;
    char ch;
    
    result = 0.0f;
    count = 0;
    length = 0.0f;

    printf("Enter a sentence: ");
    while((ch = getchar()) != '\n'){
        if(ch == ' '){
            count += 1;
        }
        else{
            length += 1;
        }
    }
    result = length / (count + 1);

    printf("Average word length: %.1f\n", result);
    return 0;
}