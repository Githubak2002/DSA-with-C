// basic tree prog to create a node 
/*
-> creating new node fun
-> fun for pre, post and inline order traversal of tree 

traversal method 
1. Pre order  -> Root, left, right
1. Post order -> Left, right, Root
1. Inorder    -> Left, Root, right
*/


// tree program to create new node and all types of traversal



#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node * left;
    char data;
    struct node * right;
};
// struct node * root = NULL;

struct node * create(int d)
{
    struct node * ptr = (struct node*) malloc(sizeof(struct node));
    ptr->data = d;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

void preOrder(struct node * root)
{
    if(root!=NULL)
    {
        printf("%d->",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }   
}

void postOrder(struct node * root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d->",root->data);
    }   
}

void inOrder(struct node * root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d->",root->data);
        inOrder(root->right);
    }   
}

int main()
{
    struct node *root = NULL, *p1,*p2,*p3,*p4,*p5;
    root = create(5);
    p1 = create(4);
    p2 = create(3);
    p3 = create(2);
    p4 = create(1);
    p5 = create(7);

    // linking the nodes of the tree
    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->right = p5;

    // printf("/nPre order traversal of tree is ");
    preOrder(root);
    printf("NULL\n");
    // inOrder(root);
    // printf("NULL\n");
    // postOrder(root);
    // printf("NULL\n");

    return 0;
}

/*  #include<stdio.h>
#include<stdlib.h>
struct node{
    struct node * left;
    char data;
    struct node * right;
};

//fun for creating a new node 
struct node * CreateNewNode(int d)
{
    struct node * n = (struct node *)malloc(sizeof(struct node));
    n->data=d;
    n->left=NULL;
    n->right=NULL;
    return n;
}

//pre order traversal fun 
void PreOrederTraverse(struct node * root)
{
    if(root!=NULL){
        printf("%d ",root->data);
        PreOrederTraverse(root->left);
        PreOrederTraverse(root->right);
    } 
}

//post order traversal fun 
void PostOrederTraverse(struct node * root)
{
    if(root!=NULL){
        PostOrederTraverse(root->left);
        PostOrederTraverse(root->right);
        printf("%d ",root->data);
    } 
}

//inorder traversal fun 
void inorder(struct node * root)
{
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    } 
}

int main()
{

    struct node * n1 = CreateNewNode(1);
    struct node * n2 = CreateNewNode(2);
    struct node * n3 = CreateNewNode(3);
    struct node * n4 = CreateNewNode(4);
    struct node * n5 = CreateNewNode(5);
    struct node * n6 = CreateNewNode(6);
    struct node * n7 = CreateNewNode(7);

    //LINKING THE NODES OF THE TREE TO ROOT NODE
    //here n1 is ROOT NODE 

    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->left = n6;
    n3->right = n7;

    //ALL TRAVERSAL FUN CALL
    // printf("Pre oreder traversal of tree \n"); PreOrederTraverse(n1);
    // printf("Post oreder traversal of tree \n"); PostOrederTraverse(n1);
    printf("Inline oreder traversal of tree \n"); inorder(n1);
    

    return 0;
}
*/
