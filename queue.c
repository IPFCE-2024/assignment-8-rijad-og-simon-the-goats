#include "queue.h"
#include <stdio.h>
#include "node.h"
#include <stdlib.h>
#define MAX_QUEUE_SIZE 100




void init_queue(queue *q) {
    q-> front=NULL;
    q-> rear=NULL; 
    q->count = 0; 
}

bool empty(const queue *q) {
    return q->count == 0; 
}

bool full(const queue *q) {
    return (q->count == MAX_QUEUE_SIZE);
}

void enqueue(queue *q, int x) {
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data =x; 
    new_node-> next = NULL;


        if(q->rear == NULL){
            q->front =new_node;
            q->rear =new_node; 
        }

    else {
        q->rear->next = new_node; 
        q->rear = new_node;
    }
    q->count++;
}

int dequeue(queue *q) {
    if(q->count == 0){
        printf("køen er tom\n");
            return -1;
    }
    int data = q->front->data; 
    node* temp= q->front; 

    q->front = q->front->next; 

    if(q->front ==NULL){
        q->rear= NULL;
    }
    free(temp);
    q->count--;

    return data; 

}

// Opgave 4
void push(int element, node **head) {
    node *new_node = (node*)malloc(sizeof(node));
    new_node->data = element; 
    new_node->next =*head;
    *head = new_node;
}

int pop(node **head) {
    if(*head ==NULL){
        return -1;
    }

    int data = (*head)->data;
    node* temp = *head; 
    *head = (*head)->next;
    free(temp);
    return data;
}
int x=5;
void enqueueStack(queue *q, int x) {
      push(x, &q->stack.head); 
}

int dequeueStack(queue *q) {
   int element = pop(&q->stack.head); 
   return element; 
}