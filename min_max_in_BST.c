// min and max in binary search tree  

/*  -> fun to get max and min from the BST 
-> fun for creating new node and inserting new ele
-> fun for pre, post and inline order traversal of tree 

traversal method 
1. Pre order  -> Root, left, right
1. Post order -> Left, right, Root
1. Inorder    -> Left, Root, right
*/

#include<stdio.h>
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
void PreOrderTraverse(struct node * root)
{
    if(root!=NULL){
        printf("%d ",root->data);
        PreOrderTraverse(root->left);
        PreOrderTraverse(root->right);
    } 
}

//post order traversal fun 
void PostOrderTraverse(struct node * root)
{
    if(root!=NULL){
        PostOrderTraverse(root->left);
        PostOrderTraverse(root->right);
        printf("%d ",root->data);
    } 
}

//inorder traversal fun 
void InorderTraverse(struct node * root)
{
    if(root!=NULL){
        InorderTraverse(root->left);
        printf("%d ",root->data);
        InorderTraverse(root->right);
    } 
}

//fun for inserting a new node 
struct node * InsertNewNode(struct node * tnode, int d)
{
    if(tnode==NULL)
    {
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=d;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
    }
    if(d>(tnode->data))
    {
        tnode->right=InsertNewNode(tnode->right,d);
    }
    if((d<tnode->data))
    {
        tnode->left=InsertNewNode(tnode->left,d);
    }
    return tnode;
    
}

/* lab code to get min (returning the NODE )
struct node * min(struct node * r)
{
    if(r==NULL)
        printf("ele not found\n");
    else if(r->left)
        return (min(r->left));
    else
        return r;
}
*/

struct node* min(struct node * r)
{
    if(r==NULL)
        printf("ele not found\n");
    else if(r->left)
        return (min(r->left));
    else
        return r;
}

struct node* max(struct node * r)
{
    if(r==NULL)
        printf("ele not found\n");
    else if(r->right)
        return (max(r->right));
    else
        return r;
}
int main()
{

    struct node * root = NULL;
    root = InsertNewNode(root,5);
    root = InsertNewNode(root,3);
    root = InsertNewNode(root,4);
    root = InsertNewNode(root,6);
    root = InsertNewNode(root,7);
    root = InsertNewNode(root,2);


    printf("Preorder oreder traversal of tree \n"); 
    PreOrderTraverse(root);
    // printf("\nPostorder oreder traversal of tree \n"); 
    // PostOrderTraverse(root);
    // printf("\nInorder traversal of tree \n"); 
    // InorderTraverse(root);    

// to find the min from the BST
    struct node * m = min(root);
    printf("\nMin in the BST = %d\n",m->data);

// to find the max from the BST
    struct node * n = max(root);
    printf("Max in the BST = %d\n",n->data);

    return 0;
}

// inorder prdessossr will be the max at left side of the tree 