#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int * arr;
};

int isFull(struct stack * ptr) {
    if(ptr->top == ptr->size-1)
        return 1;
    return 0;
}
int isEmpty(struct stack * ptr) {
    if(ptr->top == -1)
        return 1;
    return 0;
}
void push(struct stack * ptr, int val) {
    if(isFull(ptr)) 
        printf("Stack is Full, can't inserted\n");
    ptr->top++;
    ptr->arr[ptr->top] = val;
    printf("%d is inserted\n", ptr->arr[ptr->top]);
}
int pop(struct stack * ptr) {
    if(isEmpty(ptr)) 
        printf("Stack is Empty, can't Pop");
    int val = ptr->arr[ptr->top];
    printf("%d is poped\n", ptr->arr[ptr->top]);
    ptr->top--;

    return val;
}

int main() {
    struct stack * s = (struct stack *) malloc(sizeof(struct stack));
    s->size = 5;
    s->top = -1;
    s->arr = (int *) malloc(s->size * sizeof(int));

    if(isEmpty(s)) 
        printf("Queue is Empty...\n");
    if(isFull(s)) 
        printf("Queue is Full...\n");

    push(s, 67);
    push(s, 57);
    push(s, 6);
    push(s, 61);
    push(s, 26);

    if(isEmpty(s)) 
        printf("Queue is Empty...\n");
    if(isFull(s)) 
        printf("Queue is Full...\n");

    pop(s);
    pop(s);
    pop(s);

    if(isEmpty(s)) 
        printf("Queue is Empty...\n");
    if(isFull(s)) 
        printf("Queue is Full...\n");

    pop(s);
    pop(s);

    if(isEmpty(s)) 
        printf("Queue is Empty...\n");
    if(isFull(s)) 
        printf("Queue is Full...\n");

    return 0;
}
