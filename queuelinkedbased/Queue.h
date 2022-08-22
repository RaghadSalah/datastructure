

#ifndef _QUEUE_H_
#define _QUEUE_H_
#define QueueEntry int

typedef struct queuenode
{
    struct queuenode *next;
    QueueEntry entry;
}QueueNode;

typedef struct queue
{
    QueueNode *front;
    QueueNode *rare;
    int size;
}Queue;

void CreateQueue(Queue *pq);
void Append(QueueEntry e, Queue *pq);
void Serve(QueueEntry *qe, Queue *pq);
int QueueEmpty(Queue *pq);
int QueueFull(Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq);
void TraverseQueue(Queue *pq, void (*qf)(QueueEntry));

#endif