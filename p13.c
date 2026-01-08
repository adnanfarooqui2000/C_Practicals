/*
through the program user apply their understanding of their recursion to perform 
specific tasks such as in-order , pre-order , & post-order traversals of the BST.
*/ 
#include<stdio.h>
#include<stdlib.h>

struct p13 {
    int data;
    struct p13 *l, *r;
};

struct p13* newp13(int val) {
    struct p13* node = (struct p13*)malloc(sizeof(struct p13));
    node->data = val;
    node->l = node->r = NULL;
    return node;
}

struct p13* insert(struct p13* root, int val) {
    if(root == NULL)
        return newp13(val);

    if(val < root->data)
        root->l = insert(root->l, val);
    else
        root->r = insert(root->r, val);

    return root;
}

void inorder(struct p13* root) {
    if(root) {
        inorder(root->l);
        printf("%d ", root->data);
        inorder(root->r);
    }
}

void preorder(struct p13* root) {
    if(root) {
        printf("%d ", root->data);
        preorder(root->l);
        preorder(root->r);
    }
}

void postorder(struct p13* root) {
    if(root) {
        postorder(root->l);
        postorder(root->r);
        printf("%d ", root->data);
    }
}

int main() {
    struct p13* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    printf("In-order   : ");
    inorder(root);
    printf("\n");

    printf("Pre-order  : ");
    preorder(root);
    printf("\n");

    printf("Post-order : ");
    postorder(root);
    printf("\n");

    return 0;
}
