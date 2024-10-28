#pragma once

#include <assert.h>

#include <stdbool.h>

#include "queue.h"

#include "node.h"
 


typedef struct {
  node *head;
} stack;

typedef struct queue {
   int size;        // Keeps track of the size of the queue
    node* front;     // Pointer to the front of the queue
    node* rear;      // Pointer to the rear of the queue
    int count;
    stack stack;
} queue;

void init_queue(queue* q);

bool empty(const queue *q);
bool full(const queue *q);
void enqueue(queue *q, int x);
int dequeue(queue *q);
void push(int element, node **head);
int pop(node **head);
void enqueueStack(queue *q, int x);
int dequeueStack(queue *q);

