#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;                                                    
};


// struct node *createLL(struct node *head) {
//     struct node *newNode, *ptr;
//     int n;
//     printf("\nEnter your data : ");
//     scanf("%d", &n);
//     if (n == -1) {
//         return head;
//     } else {
//         if(head == NULL) {
//             newNode = (struct node*)malloc(sizeof(struct node));
//             newNode -> data = n;
//             newNode -> prev = NULL;
//             newNode -> next = head;
//             head = newNode;
//         } else {
//             newNode = (struct node*)malloc(sizeof(struct node));
//             newNode -> data = n;
//             ptr = head;
//             while (ptr -> next != head) {
//                 ptr = ptr -> next;
//             }
//             ptr -> next = newNode;
//             newNode -> prev = ptr;
//             newNode -> next = head;
//             head -> prev = newNode;
//         }
//         return createLL(head);
//     }
// }

// struct node *insertAtBeg(struct node *head){
//     struct node *newNode, *ptr = head;
//     int n;
//     printf("Enter your data : ");
//     scanf("%d", &n);
//     newNode = (struct node *)malloc(sizeof(struct node));
//     newNode -> data = n;
//     while (ptr -> next != head) {
//         ptr = ptr -> next;
//     }
//     newNode -> prev = ptr;
//     newNode ->next = head;
//     ptr -> next = newNode;
//     head -> prev = newNode;
//     head = newNode;
//     return head;
// }



struct node *createLinkedList(struct node *head) {
    struct node *newNode, *ptr = head;
    int n;
    printf("\nEnter -1 to End.");
    printf("\nEnter your data : ");
    scanf("%d", &n);
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode -> data = n;
    while(n != -1) {
        if(head == NULL) {
            newNode -> prev = NULL;
            newNode -> next = head;
            head = newNode;
        } else {
            while(ptr->next != head) {
                ptr = ptr->next;
            }
            newNode -> prev = ptr;
            ptr -> next = newNode;
            newNode -> next = head;
            head -> prev = newNode;
        }
        printf("Enter your data : ");
        scanf("%d", &n);
    }
    return head;
}

int main() {
    struct node *head = NULL;
    int opt;
    do {
        printf("\n\n***Main Manu***");
        printf("\n1) Create List");
        printf("\n2) Insert a Node");
        printf("\n3) Delete a Node");
        printf("\n4) Exit");
        printf("\n\nEnter your Option : ");
        scanf("%d", &opt);
        // int wnt;
        switch (opt) {
            case 1 : 
                head = createLinkedList(head);
                printf("\nCircular Linked List Created.\n");
                printf("%d", head->data);
                break;
            case 2 :
                    // printf("Where you want to Insert {1-first/0-last} : ");
                    // scanf("%d", &wnt);
                    // if(wnt == 1) {
                    //     head = insertAtBeg(head);
                    //     printf("Element Inserted");
                    // }  else if (wnt == 0) {
                    //     head = insertAtEnd(head);
                    //     printf("Element Inserted");
                    // } else {
                    //     printf("Enter Proper Option...");
                    // }
                    // printf("%d", head -> data);
                break;
            case 3 :
                /* code */
                break;
        }

    } while (opt != 4);
    
    return 0;
}