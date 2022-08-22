#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#define StackEntry int

void Display(StackEntry e)
{
    printf("%d ",e);
}

int main()
{
    StackEntry top,e;
    int check = 1;
    while(check == 1){
    Stack s;
    int choose_mode;
    printf("\t\t\t\t____________ choose a number _________ \n\n");
    printf("\t\t\t\t\t  1- to create a stack.\n");
    printf("\t\t\t\t\t  2- Push to stack.\n");
    printf("\t\t\t\t\t  3- Pop from stack.\n");
    printf("\t\t\t\t\t  4- check if stack is empty.\n");
    printf("\t\t\t\t\t  5- check if stack is full.\n");
    printf("\t\t\t\t\t  6- clear stack.\n");
    printf("\t\t\t\t\t  7- return stack's top.\n");
    printf("\t\t\t\t\t  8- print the stack size.\n");
    printf("\t\t\t\t\t  9- view Stack's elements.\n");
    printf("\t\t\t\t\t  10- Exit.\n");
    printf("\t\t\t\t______________________________________\n");
    scanf("%d",&choose_mode);

    switch (choose_mode)
    {
        case 1:
              creatStack(&s);
              printf("\t\t\t\t\t  Stack Createsd succecfully\n");
              break;


        case 2:
              printf("\t\t\t\t\t  Enter the number\n");
              int p;
              scanf("%d",&p);
              push(p,&s);
              break;

        case 3:
              pop(&e,&s);
              printf("\t\t\t\t\t  Element Poped succecfully\n");
              break;

        case 4:
             if(stackEmpty(&s)==1)
             printf("\t\t\t\t\t  Stack is empty\n");
             else
             printf("\t\t\t\t\t  Stack is not empty\n");
             break;


        case 5:
             if(stackFull(&s)==1)
             printf("\t\t\t\t\t  Stack is full\n");
             else
             printf("\t\t\t\t\t  Stack isn't full\n");
             break;

        case 6:
             clearStack(&s);
             printf("\t\t\t\t\t  Stack is cleared succecfully\n");
             break;


        case 7:
             stacktop(&top,&s);
             printf("\t\t\t\t\t  Stack's top is %d\n",top);
             break;

        case 8:
             printf("\t\t\t\t\t  Stack's size is %d\n",stackSize(&s));
             break;

        case 9:
             TraverseStack(&s,&Display);
             break;

        case 10:
             check =0;
             break;

        default:
             printf("\t\t\t\t\t  Enter a valid number\n");
             break;
    }
    }
    return 0;
}