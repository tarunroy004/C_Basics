#include<stdio.h>
#include<stdlib.h>

struct queue {
    int size;
    int front;
    int rear;
    int* arr;
};

int visited[7] = {0,0,0,0,0,0,0};
int DFSvisited[7] = {0,0,0,0,0,0,0};
int a[7][7] = { //incidency matrix of graph representation
    {0,1,1,1,0,0,0},
    {1,0,1,0,0,0,0},
    {1,1,0,1,1,0,0},
    {1,0,1,0,1,0,0},
    {0,0,1,1,0,1,1},
    {0,0,0,0,1,0,0},
    {0,0,0,0,1,0,0} 
};

int isEmpty (struct queue *q) {
    if(q->rear == q->front){
        return 1;
    }
    return 0;
}

int isFull (struct queue *q) {
    if(q->rear == q->size-1){
        return 1;
    }
    return 0;
}

void enqueue (struct queue *q, int val) {
    if(isFull(q)) {
        printf("This Queue is Full\n");
    } else {
        q->rear++;
        q->arr[q->rear] = val;
    }
}

int dequeue (struct queue *q) {
    int a = -1;
    if(isEmpty(q)) {
        printf("This Queue is Empty\n");
    } else {
        q->front++;
        a = q->arr[q->front];
    }
    return a;
}

void BFS(int i) {
    struct queue q;
    q.size = 400;
    q.front = q.rear = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));

    int node;
    printf("%d", i);
    visited[i] = 1;
    enqueue(&q, i);
    while(!isEmpty(&q)) {
        node = dequeue(&q);
        for (int j=0; j<7; j++) {
            if(a[node][j] == 1 && visited[j] == 0) {
                printf("%d", j);
                visited[j] = 1;
                enqueue(&q, j);
            }
        }
    }
}

void DFS(int i) {
    printf("%d", i);
    DFSvisited[i] = 1;
    for (int j = 0; j < 7; j++) {
        if(a[i][j] == 1 && !DFSvisited[j]) {
            DFS(j);
        }
    }
}

int main() {
    int start = 4; // START
    printf("\nDFS : ");
    DFS(start);
    printf("\nBFS : ");
    BFS(start);
    return 0;
}