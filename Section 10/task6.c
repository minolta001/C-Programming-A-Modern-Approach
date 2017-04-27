#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

int top = 0;
char ch;
char contents[STACK_SIZE];

void make_empty(void);
bool is_full(void);
bool is_empty(void);
void push(char);
char pop(void);
int stackunderflow(void);
int stackoverflow(void);
void finish(void);

int main(void)
{
    for(;;){
        int operand1, operand2;
        printf("Enter an RPN expression: ");

        for(;;){
            scanf(" %c", &ch);
            if(ch != '+' && ch != '-' && ch != '*' && ch != '/' && ch != '=' && ch != 'q'){
                printf("we will see\n");
                push(ch - '0');
            }
            else if(ch == '+'){
                operand1 = pop();
                operand2 = pop();
                printf ("%d, %d", operand1, operand2);
                push(operand1 + operand2);
            }
            else if(ch == '-'){
                operand1 = pop();
                operand2 = pop();
                push(operand1 - operand2);
            }
            else if(ch == '*'){
                operand1 = pop();
                operand2 = pop();
                push(operand1 * operand2);
            }
            else if(ch == '/'){
                operand1 = pop();
                operand2 = pop();
                push(operand1 / operand2);
            }
            else if(ch == '='){
                printf("Value of expression: %d\n", (pop()));
                break;
            }
            else if(ch == 'q'){
                finish();
            }
        }
    }

    return 0;
}

void make_empty(void)
{
    top = 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

bool is_empty(void)
{
    return top == 0;
}

int stack_underflow(void)
{
    printf("Stack underflow.\n");
    exit(EXIT_FAILURE);
}

int stack_overflow(void)
{
    printf("Stack overflwo.\n");
    exit(EXIT_FAILURE);
}

void push(char i)
{
    if(is_full()){
        stack_overflow();
    }
    contents[top++] = i;
}

char pop(void)
{
    if(is_empty()){
        stack_underflow();
    }
     return contents[--top];
}

void finish(void)
{
    printf("It is finished\n");
    exit(EXIT_SUCCESS);
}