#include<stdio.h>
#include<malloc.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int val) {
    struct node *n;
    n = (struct node *) malloc(sizeof(struct node));
    n -> data = val;
    n -> left = NULL;
    n -> right = NULL;
    return n;
}

int main() {
    struct node* p = createNode(2);
    struct node* p1 = createNode(23);
    struct node* p2 = createNode(18);

    p -> left = p1;
    p -> right = p2;

    printf("%d\t", p->data);
    printf("%d\t", p1->data);
    printf("%d", p2->data);
    return 0;
}
