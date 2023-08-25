// ak_insert_fun for inserting ele in tree


#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node * left;
    int data;
    struct node * right;
};

struct node * root = NULL;

struct node * CreateNewNode(int d)
{
    struct node * n = (struct node *)malloc(sizeof(struct node));
    n->data=d;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void PreOrderTraverse(struct node * root)
{
    if(root!=NULL){
        printf("%d ",root->data);
        PreOrderTraverse(root->left);
        PreOrderTraverse(root->right);
    } 
}

void PostOrderTraverse(struct node * root)
{
    if(root!=NULL){
        PostOrderTraverse(root->left);
        PostOrderTraverse(root->right);
        printf("%d ",root->data);
    } 
}

void InorderTraverse(struct node * root)
{
    if(root!=NULL){
        InorderTraverse(root->left);
        printf("%d ",root->data);
        InorderTraverse(root->right);
    } 
}

// ak_insert_fun 
void ak_insert_fun(struct node * r, int d)
{
    if(r == NULL){
        root = CreateNewNode(d);
        return;
        // return root;
    }
    
    struct node * prevPtr = NULL;
    while(r!=NULL)
    {
        prevPtr = r;
        if(r->data == d){
            printf("Ele can't be inserted as it already exist in tree\n");
            return;
        }
        if(d < r->data)
            r = r->left;
        else 
            r = r->right;
    }
    struct node * ptr = CreateNewNode(d);
    if(d < prevPtr->data)
        prevPtr->left = ptr;
    else if(d > prevPtr->data)
        prevPtr->right = ptr;
}

/*  fun from CWH
void insert(struct node *root, int key){
   struct node *prev = NULL;
   while(root!=NULL){
       prev = root;
       if(key==root->data){
           printf("Cannot insert %d, already in BST", key);
           return;
       }
       else if(key<root->data){
           root = root->left;
       }
       else{
           root = root->right;
       }
   }
   struct node* new = createNode(key);
   if(key<prev->data){
       prev->left = new;
   }
   else{
       prev->right = new;
   }

}
*/
int main()
{
    printf("value of root here is = %d\n",root);
    ak_insert_fun(root,7);
    // printf("value of data in root here is = %d\n",root->data);

    ak_insert_fun(root,5);
    // printf("value of data in root here is = %d\n",root->data);

    ak_insert_fun(root,4);
    ak_insert_fun(root,6);
    ak_insert_fun(root,8);
    ak_insert_fun(root,9);

    printf("\nPreorder traversal of tree\n");
    PreOrderTraverse(root);
    printf("\nPostorder traversal of tree\n");
    PostOrderTraverse(root);
    printf("\nInorder traversal of tree\n");
    InorderTraverse(root);
    printf("\n");



    return 0;
}