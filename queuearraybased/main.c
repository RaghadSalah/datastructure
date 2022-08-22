#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#define QueueEntry int

void Display(QueueEntry e)
{
    printf("%d ",e);
}

int main()
{
    QueueEntry top,e;
    int p;
    int check = 1;
    while(check == 1){
    Queue q;
    int choose_mode;
    printf("\t\t\t\t____________ choose a number __________ \n\n");
    printf("\t\t\t\t\t  1-  create Queue.\n");
    printf("\t\t\t\t\t  2- add to the queue.\n");
    printf("\t\t\t\t\t  3- Serve from queue.\n");
    printf("\t\t\t\t\t  4- check if queue is empty.\n");
    printf("\t\t\t\t\t  5- check if queue is full.\n");
    printf("\t\t\t\t\t  6- clear queue.\n");
    printf("\t\t\t\t\t  7- print the queue size.\n");
    printf("\t\t\t\t\t  8- view the queue elements.\n");
    printf("\t\t\t\t\t  9- Exit.\n");
    printf("\t\t\t\t______________________________________\n");
    scanf("%d",&choose_mode);

    switch (choose_mode)
    {
        case 1:
              Createqueue(&q);
              printf("\t\t\t\t\t  Queue Createsd succecfully\n");
              break;


        case 2:
              printf("\t\t\t\t\t  Enter the number\n");
              scanf("%d",&p);
              Append(p,&q);
              break;

        case 3:
              Serve(&e,&q);
              printf("\t\t\t\t\t  Element Served succecfully\n");
              break;

        case 5:
             if(QueueFull(&q)==1)
             printf("\t\t\t\t\t  Queue is full\n");
             else
             printf("\t\t\t\t\t  Queue isn't full\n");
             break;

 case 4:
             if(QueueEmpty(&q)==1)
             printf("\t\t\t\t\t  Queue is empty\n");
             else
             printf("\t\t\t\t\t  Queue is not empty\n");
             break;

        case 6:
             ClearQueue(&q);
             printf("\t\t\t\t\t  Queue is deleted succecfully\n");
             break;

        case 7:
             printf("\t\t\t\t\t  Queue's size is %d\n",QueueSize(&q));
             break;

        case 8:
             TraverseQueue(&q,&Display);
             break;

        case 9:
             check =0;
             break;

        default:
             printf("\t\t\t\t\t  Enter a valid number\n");
             break;
    }
    }
    return 0;
}