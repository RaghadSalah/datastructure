

#ifndef _QUEUE_H
#define _QUEUE_H
#define QueueEntry int
#define MaxQueue 7

typedef struct queue
{
    QueueEntry entry[MaxQueue];
    int front;
    int rare;
    int size;
}Queue;

void Createqueue(Queue *pq);
void Append(QueueEntry e,Queue *pq);
void Serve(QueueEntry *qe, Queue *pq);
int QueueEmpty(Queue *pq);
int QueueFull(Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq);
void TraverseQueue(Queue *pq , void (*qf)(QueueEntry));
#endif