

#ifndef _STACK_H
#define _STACK_H
#define StackEntry int

typedef struct stacknode
{
    StackEntry entry;
    struct stacknode *next;
}StackNode;

typedef struct stack
{
     StackNode *top;
    int n;
}Stack;


void creatStack(Stack *ps);
void push(StackEntry e,Stack *ps);
void pop(StackEntry *pe,Stack *ps);
int stackEmpty(Stack *ps);
int stackFull(Stack *ps);
void clearStack(Stack *ps);
void stacktop(StackEntry *pe,Stack *ps);
int stackSize(Stack *ps);
void TraverseStack(Stack *ps,void(*pf)(StackEntry));

#endif