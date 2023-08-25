/* BINARY SEARCH TREE (100 % correct )
1. Traversal
2. Create fun
3. Search fun
4. Insertion fun (100 % correct )
5. Deletion fun 
*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * left;
    struct node * right;
};

void preorder (struct node * root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder (struct node * root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

void inorder (struct node * root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

struct node * create (int d)
{
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=d;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}

int searchBST (struct node * r,int d)
{
    if(r!=NULL)
    {
        if(r->data == d)
            return d;
        else if(r->data > d)
            searchBST (r->left,d);
        else
            searchBST (r->right,d);
    }
    else
        return -1;
}

void insert(struct node * r,int ins_ele)
{
    if(r==NULL){
        r = create(ins_ele);
        return;
    }
    struct node * prev;
    while(r!=NULL)
    {
        prev = r;
        // if(ins_ele==r->data)
            // return;
        if (ins_ele < r->data)
            r = r->left;
        else
            r = r->right;
    }
    struct node * ptr = create(ins_ele);
    if(ins_ele < prev->data)
        prev->left = ptr;
    else
        prev->right = ptr;
}

int main()
{
    struct node * root,*p2,*p3,*p4,*p5,*p6,*p7;
    root = create(6);
    p2 = create(4);
    p3 = create(8);
    p4 = create(3);
    p5 = create(5);
    p6 = create(7);
    p7 = create(9);

    root->left=p2;
    root->right=p3;

    p2->left=p4;
    p2->right=p5;

    p3->left=p6;
    p3->right=p7;


    printf("Preorder of the bst is\n");
    preorder(root);     printf("\n");

    printf("Postorder of the bst is\n");
    postorder(root);       printf("\n");

    int h = searchBST(root,7);
    // printf("%d\n",h);
    if(h!=-1)
        printf("ele %d found\n",h);
    else 
        printf("ele not found\n");

    insert(root,1);
    preorder(root);

    return 0;
}