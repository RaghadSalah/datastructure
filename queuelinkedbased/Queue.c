
#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

void CreateQueue(Queue *pq)
{
    pq->front = NULL;
    pq->rare = NULL;
    pq->size = 0;
}

void Append(QueueEntry e, Queue *pq)
{
    QueueNode *qe = (QueueNode*)malloc(sizeof(QueueNode));
    qe ->entry =e;
    qe->next =NULL;
    if(pq->size ==0)
    {
        pq->front= qe;
        pq->rare =qe;
    }
    else
    {
        pq->rare->next=qe;
    }
    pq->rare = qe;
    pq->size++;
}

void Serve(QueueEntry *qe, Queue *pq)
{
    QueueNode *qn = pq->front;
    *qe =qn->entry;
    pq->front = qn->next;
    if(!pq->front)
    {
        pq->rare = NULL;
    }
    pq->size --;
}

int QueueEmpty(Queue *pq)
{
    return pq->size == 0;
}

int QueueFull(Queue *pq)
{
    return 0;
}

int QueueSize(Queue *pq)
{
    return pq->size;
}

void ClearQueue(Queue *pq)
{
    while (pq->front != NULL)
    {
         pq->rare = pq->front->next;
         free(pq->front);
         pq->front = pq->rare;
    }
    pq->size = 0;
}

void TraverseQueue(Queue *pq, void (*qf)(QueueEntry))
{
    QueueNode *qn;
    for(qn=pq->front; qn != NULL; qn = qn->next)
    {
        (*qf)(qn->entry);
    }
}