#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void llt(struct Node *ptr) {
    while(ptr != NULL) {
        printf("The Element is : %d\n", ptr -> data);
        ptr = ptr -> next;
    }
}

int main() {
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * forth;
    struct Node * fifth;
    struct Node * sixth;
    struct Node * seventh;

    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    forth = (struct Node *) malloc(sizeof(struct Node));
    fifth = (struct Node *) malloc(sizeof(struct Node));
    sixth = (struct Node *) malloc(sizeof(struct Node));
    seventh = (struct Node *) malloc(sizeof(struct Node));

    head -> data = 45;
    head -> next = second;

    second -> data = 12;
    second -> next = third;

    third -> data = 18;
    third -> next = forth;

    forth -> data = 02;
    forth -> next = fifth;

    fifth -> data = 12;
    fifth -> next = sixth;

    sixth -> data = 01;
    sixth -> next = seventh;

    seventh -> data = 2022;
    seventh -> next = NULL;

    llt(head);

    return 0;
}