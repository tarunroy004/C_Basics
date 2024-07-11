#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node * left;
    int data;
    struct node * right;
};

void preorder(struct node * root) {
    if(root!=NULL) {
        printf("%d\t", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node * root) {
    if(root!=NULL) {
        inorder(root->left);
        printf("%d\t", root->data);
        inorder(root->right);
    }
}

void postorder(struct node * root) {
    if(root!=NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t", root->data);
    }
}

int main() {
    struct node * p1 = (struct node *) malloc(sizeof(struct node));
    struct node * p2 = (struct node *) malloc(sizeof(struct node));
    struct node * p3 = (struct node *) malloc(sizeof(struct node));
    struct node * p4 = (struct node *) malloc(sizeof(struct node));
    struct node * p5 = (struct node *) malloc(sizeof(struct node));
    struct node * p6 = (struct node *) malloc(sizeof(struct node));
    struct node * p7 = (struct node *) malloc(sizeof(struct node));

//              p1(5)
//              /  \
//             /    \   
//            /      \    
//          p2(3)    p3(8)
//          /   \     /  \   
//      p4(1) p5(4) p6(7) p7(9)    
// 
// 


    //DATA
    p1->data = 5;
    p2->data = 3;
    p3->data = 8;
    p4->data = 1;
    p5->data = 4;
    p6->data = 7;
    p7->data = 9;

    //DIRECTION
    p1->left=p2;
    p1->right=p3;
    p2->left=p4;
    p2->right=p5;
    p3->left=p6;
    p3->right=p7;
    p4->left=p4->right=p5->left=p5->right=p6->left=p6->right=p7->left=p7->right=NULL;

    printf("\nPre Order : ");
    preorder(p1);
    printf("\nIn Order : ");
    inorder(p1);
    printf("\nPost Order : ");
    postorder(p1);

    return 0;
}