#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;
char ch;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char);
char pop(void);
int stack_overflow(void);
int stack_underflow(void);
void exit_incorrect_nesting(void);

void exit_incorrect_nesting(void)
{
  printf("Nesting is NOT correct\n");
  exit(EXIT_SUCCESS);
}


void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char i)
{
    if(is_full()){
        stack_overflow();
    }
    else{
        contents[top++] = i;
    }
}

char pop(void)
{
    if(is_empty()){
        stack_underflow();
    }
    else{
        return contents[--top];
    }
}

void exit_incorrect_nesting(void)
{
  printf("Nesting is NOT correct\n");
  exit(EXIT_SUCCESS);
}


int main(void)
{
    printf("Enter parentheses and/or braces: ");
    while((ch = getchar()) != '\n'){
        if(ch == '(' || ch == '{'){
            push(ch);
        }
        else if(ch == ')'){
            if(pop() != '(') exit_incorrect_nesting();
        }
        else if(ch == '}'){
            if(pop() != '{') exit_incorrect_nesting(); 
        }
    }

    if(!is_empty()) printf("Got problem, not nested properly\n");
    else printf("All parentheses and braces are matched\n");

    return 0;
}