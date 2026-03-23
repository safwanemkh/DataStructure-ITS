#ifndef STRUCTURES_H
#define STRUCTURES_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100 
// ==========================================
// 1. LA PILE (STACK) - Pour les doublons
// ==========================================
typedef struct {
    char data[MAX];
    int top;
} Stack;

void initStack(Stack *s);
bool isStackEmpty(Stack *s);
bool isStackFull(Stack *s);
void push(Stack *s, char c);
char pop(Stack *s);

// ==========================================
// 2. LA FILE (QUEUE) - Pour le Buffer
// ==========================================
typedef struct {
    char data[MAX];
    int front;
    int rear;
} Queue;

void initQueue(Queue *q);
bool isQueueEmpty(Queue *q);
bool isQueueFull(Queue *q);
void enqueue(Queue *q, char c);
char dequeue(Queue *q);

// ==========================================
// 3. LA DEQUE - Pour le Palindrome
// ==========================================
typedef struct {
    char data[MAX];
    int front;
    int rear;
} Deque;

void initDeque(Deque *d);
bool isDequeEmpty(Deque *d);
bool isDequeFull(Deque *d);
void insertFront(Deque *d, char c);
void insertLast(Deque *d, char c);
char deleteFront(Deque *d);
char deleteLast(Deque *d);

#endif