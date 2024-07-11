#include<stdio.h>
#include<stdlib.h>
struct Node {
    struct Node * pre;
    int data;
    struct Node * next;
};

struct Node * linkedListTraversal(struct Node *start) {
    struct Node * ptr = start;
    do {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    } while (ptr!=start);
    return start;
} 

struct Node * insertNode(struct Node *start) {
    int ch;
    printf("\nWhere you want to insert an Element\n1 : At first\n2 : Inside the Linked List\n3 : At last\nAnswer : ");
    scanf("%d", &ch);
    if(ch==1) {
        struct Node * newNode;
        newNode = (struct Node *) malloc(sizeof(struct Node));
        int data;
        printf("Enter a Data : ");
        scanf("%d", &data);
        newNode->data = data;
        newNode->pre = start->pre;
        start->pre->next = newNode;
        newNode->next = start;
        start->pre = newNode;
        start  = newNode;
    } else if(ch==3) {
        struct Node * newNode;
        newNode = (struct Node *) malloc(sizeof(struct Node));
        int data;
        printf("Enter a Data : ");
        scanf("%d", &data);
        newNode->data = data;
        newNode->pre = start->pre;
        start->pre->next = newNode;
        newNode->next = start;
        start->pre = newNode;
    } else {
        struct Node * newNode, *ptr;
        newNode = (struct Node *) malloc(sizeof(struct Node));
        int data, pos;
        printf("Where you want to Insert, After which Element : ");
        scanf("%d", &pos);
        printf("OK : NOW\n");
        printf("Enter a Data : ");
        scanf("%d", &data);
        newNode->data = data;
        ptr = start;
        while (ptr->data!=pos) {
            ptr = ptr->next;
        }
        newNode->pre = ptr;
        newNode->next = ptr->next;
        ptr->next->pre = newNode;
        ptr->next = newNode;
    }
    printf("Do you want to insert more element (1:yes_0:no) : ");
    scanf("%d", &ch);
    if(ch) {
        insertNode(start);
    }
    return start;
}

struct Node * deleteNode(struct Node *start) {
    struct Node *ptr;
    ptr = start;
    int elem;
    printf("\nWhich element you want to Delete : ");
    scanf("%d", &elem);
    while (ptr->data != elem) {
        ptr= ptr->next;
    }
    ptr->pre->next = ptr->next;
    ptr->next->pre = ptr->pre;
    free(ptr);
    printf("Do you want to delete more Element (1:yes_0:no) : ");
    scanf("%d", &elem);
    if (elem) {
        deleteNode(start);
    }
    return start;
}

int main() {
    struct Node * head;
    struct Node * first;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    struct Node * fifth;
    head = (struct Node *) malloc(sizeof(struct Node));
    first = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));
    fifth = (struct Node *) malloc(sizeof(struct Node));

    //HEAD
    head -> pre = NULL;
    head -> next = first;

    //NEXT
    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = first;

    //PRE
    second -> pre = first;
    third -> pre = second;
    fourth -> pre = third;
    fifth -> pre = fourth;
    first -> pre = fifth;

    //DATA
    first -> data = 45;
    second -> data = 26;
    third -> data = 18;
    fourth -> data = 22;
    fifth -> data = 5;

    linkedListTraversal(first);
    first = insertNode(first);
    linkedListTraversal(first);
    first = deleteNode(first);
    linkedListTraversal(first);
    return 0;
}