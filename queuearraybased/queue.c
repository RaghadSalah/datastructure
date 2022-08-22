
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void Createqueue(Queue *pq)
{
    pq->front=0;
    pq->rare=-1;
    pq->size=0;
}

void Append(QueueEntry e,Queue *pq)
{
    if(pq->rare == MaxQueue-1)
    { pq->rare=0; }
    else
    { pq->rare ++; }
    pq->entry[pq->rare]=e;
    pq->size++;
}

void Serve(QueueEntry *qe, Queue *pq)
{
    *qe = pq->entry[pq->front];
    if(pq->front == MaxQueue-1)
    { pq->front =0; }
    else
    { pq->front ++; }
   pq->size --;

}

int QueueEmpty(Queue *pq)
{
    return pq->size==0;
}

int QueueFull(Queue *pq)
{
    return (pq->size == MaxQueue);
}

int QueueSize(Queue *pq)
{
    return pq->size;
}

void ClearQueue(Queue *pq)
{
    pq->front=0;
    pq->rare=-1;
    pq->size =0;
}

void TraverseQueue(Queue *pq , void (*qf)(QueueEntry))
{
    int pos;
    int s=0;
    for(pos = pq->front; s< pq->size; s++)
    {
        (*qf)(pq->entry[pos]);
       pos= (pos+1) % MaxQueue;
    }
}