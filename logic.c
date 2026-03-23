#include "structures.h"

// =================================================================
// 1. LOGIQUE DE LA PILE (STACK) - LIFO
// =================================================================
void initStack(Stack *s) {
    s->top = -1;
}

bool isStackEmpty(Stack *s) {
    return s->top == -1;
}

bool isStackFull(Stack *s) {
    return s->top == MAX - 1;
}

void push(Stack *s, char c) {
    if (!isStackFull(s)) {
        s->data[++s->top] = c;
    }
}

char pop(Stack *s) {
    if (isStackEmpty(s)) return '\0';
    return s->data[s->top--];
}

// =================================================================
// 2. LOGIQUE DE LA FILE (QUEUE) - FIFO
// =================================================================
void initQueue(Queue *q) {
    q->front = 0;
    q->rear = -1;
}

bool isQueueEmpty(Queue *q) {
    return q->front > q->rear;
}

bool isQueueFull(Queue *q) {
    return q->rear == MAX - 1;
}

void enqueue(Queue *q, char c) {
    if (!isQueueFull(q)) {
        q->data[++q->rear] = c;
    }
}

char dequeue(Queue *q) {
    if (isQueueEmpty(q)) return '\0';
    return q->data[q->front++];
}

// =================================================================
// 3. LOGIQUE DE LA DEQUE - CIRCULAIRE (Le chef-d'œuvre)
// =================================================================
void initDeque(Deque *d) {
    d->front = -1;
    d->rear = -1;
}

bool isDequeEmpty(Deque *d) {
    return d->front == -1;
}

bool isDequeFull(Deque *d) {
    return ((d->rear + 1) % MAX == d->front);
}

void insertLast(Deque *d, char c) {
    if (isDequeFull(d)) return;
    if (isDequeEmpty(d)) {
        d->front = 0;
        d->rear = 0;
    } else {
        d->rear = (d->rear + 1) % MAX;
    }
    d->data[d->rear] = c;
}

void insertFront(Deque *d, char c) {
    if (isDequeFull(d)) return;
    if (isDequeEmpty(d)) {
        d->front = 0;
        d->rear = 0;
    } else {
        d->front = (d->front - 1 + MAX) % MAX;
    }
    d->data[d->front] = c;
}

char deleteFront(Deque *d) {
    if (isDequeEmpty(d)) return '\0';
    char val = d->data[d->front];
    if (d->front == d->rear) {
        d->front = -1;
        d->rear = -1;
    } else {
        d->front = (d->front + 1) % MAX;
    }
    return val;
}

char deleteLast(Deque *d) {
    if (isDequeEmpty(d)) return '\0';
    char val = d->data[d->rear];
    if (d->front == d->rear) {
        d->front = -1;
        d->rear = -1;
    } else {
        d->rear = (d->rear - 1 + MAX) % MAX;
    }
    return val;
}