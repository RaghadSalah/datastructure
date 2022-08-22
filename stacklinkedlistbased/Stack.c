
#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#define StackEntry int

void creatStack(Stack *ps)
{
    ps->top = NULL;
    ps->n =0;
}

void push(StackEntry e,Stack *ps)
{
    StackNode *pn =(StackNode*)malloc(sizeof(StackNode));
    pn ->entry =e;
    pn->next = ps->top;
    ps->top =pn;
    ps->n ++;
}

void pop(StackEntry *pe,Stack *ps)
{
    StackNode *pn;
    *pe = ps->top->entry;
    pn = ps->top;
    ps->top = ps->top->next;
    free(pn);
}

int stackEmpty(Stack *ps)
{
    return ps->top == NULL;
}

int stackFull(Stack *ps)
{
    return 0;
}

void clearStack(Stack *ps)
{
    StackNode *pn = ps->top;
    while (pn != NULL)
    {
       pn=pn->next;
       free(ps->top);
       ps->top = pn;
    }
    ps->n = 0;
}

void stacktop(StackEntry *pe,Stack *ps)
{
    *pe = ps ->top ->entry;
}

void TraverseStack(Stack *ps,void(*pf)(StackEntry))
{
    StackNode *pn = ps->top;
    while (pn)
    {
        (*pf)(pn->entry);
        pn = pn->next;
    }

}

int stackSize(Stack *ps)
{
    return ps->n;
}