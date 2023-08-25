// search in binary search tree (BST) 100 % working
// ak_search_fun fun made by ak and rest from CWH

/*  My first try
#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n = (struct node *) malloc(sizeof(struct node)); 
    // Allocating memory in the heap
    n->data = data; 
    n->left = NULL; 
    n->right = NULL; 
    return n; 
}

void preOrder(struct  node* root){
    if(root!=NULL){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct  node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

void inOrder(struct  node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

struct node * search(struct node* root, int key)
{
    if(root==NULL)
        return NULL;
    if(key==root->data)
        return root;
    else if(key<root->data)         // as it's a binary search tree
        search(root->left, key);
    else
        search(root->right, key);
}



int main(){
     
    struct node *root,*p1,*p2,*p3,*p4 ;
    root  = createNode(5);
    p1 = createNode(3);
    p2 = createNode(6);
    p3 = createNode(1);
    p4 = createNode(4);

    // Linking the root node with left and right children
    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;

    //   Finally The tree looks like this:
    //       5
    //      / \
    //     3   6
    //    / \
    //   1   4  
                    
    struct node* n = search(root, 1);
    if(n!=NULL)
        printf("Found: %d", n->data);
    else
        printf("Element not found");
    return 0;
}
*/



#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n = (struct node *) malloc(sizeof(struct node)); 
    // Allocating memory in the heap
    n->data = data; 
    n->left = NULL; 
    n->right = NULL; 
    return n; 
}

void preOrder(struct  node* root){
    if(root!=NULL){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct  node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

void inOrder(struct  node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

struct node * search(struct node* root, int key){
    if(root==NULL)
        return NULL;
    if(key==root->data)
        return root;
    else if(key<root->data)         // as it's a binary search tree
        return search(root->left, key);
    else
        return search(root->right, key);
}

// fun to check if a tree is binary or not?
int isBST(struct  node* root)
{
    static struct node *prev = NULL;
    if(root!=NULL)
    {
        if(!isBST(root->left))
            return 0;
        if(prev!=NULL && root->data <= prev->data)
            return 0;
        prev = root;
        return isBST(root->right);
    }
    else
        return 1;
}

// fun woriking 100 % by ak
void ak_search_fun(struct node * root, int d)
{
    if(root == NULL){
        printf("ele not found\n"); 
        // return 0;
    }
    else if(root->data == d){
        printf("%d is found in the tree\n",root->data);  
        // return 0;
        // return (root->data);
        }
    else if(d < root->data)
        ak_search_fun(root->left,d);
    else if(d > root->data)
        ak_search_fun(root->right,d);    
    
}

int main(){
     
    struct node *root,*p1,*p2,*p3,*p4 ;
    root  = createNode(5);
    p1 = createNode(3);
    p2 = createNode(6);
    p3 = createNode(1);
    p4 = createNode(4);

    // Linking the root node with left and right children
    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;

    //   Finally The tree looks like this:
    //       5
    //      / \
    //     3   6
    //    / \
    //   1   4  
                    
    // ak_search_fun(root,5);
    
    struct node* n = search(root, 10);
    if(n!=NULL)
        printf("Found: %d", n->data);
    else
        printf("Element not found");
    return 0;
}

