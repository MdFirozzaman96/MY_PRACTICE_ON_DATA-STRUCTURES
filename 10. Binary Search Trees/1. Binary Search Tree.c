///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>
#include<stdlib.h>

struct Binary_Search_Tree
{
    int data;
    struct Binary_Search_Tree *lchild;
    struct Binary_Search_Tree *rchild;
};

typedef struct Binary_Search_Tree BST;

BST *root=NULL;

BST * Create_Node(BST *node,int data)
{
    node=(BST*)malloc(sizeof(BST));
    node->data=data;
    node->lchild=node->rchild=NULL;
    printf("Create Node : %d\n",node->data);
    return node;
}

/// Insertion :

void Iterative_Insert(int x)
{
    BST *node;
    node=Create_Node(node,x);
    if(root==NULL)
    {
        root=node;
    }
    else
    {
        BST *p=root,*q=NULL;
        while(p)
        {
            q=p;
            if(p->data==x)
            {
                return;
            }
            else if(p->data>x)
            {
                p=p->lchild;
            }
            else
            {
                p=p->rchild;
            }
        }
        if(q->data>x)
        {
            q->lchild=node;
        }
        else
        {
            q->rchild=node;
        }
    }

}

BST * Recursive_Insert(BST *p,int x)
{
    if(p==NULL)
    {
        BST *node=NULL;
        node=Create_Node(node,x);
        return node;
    }
    else if(p->data>x)
    {
        p->lchild=Recursive_Insert(p->lchild,x);
    }
    else
    {
        p->rchild=Recursive_Insert(p->rchild,x);
    }
    return p;
}

/// Traversing :

void Preorder_Traverse(BST *p)
{
    if(p)
    {
        printf("%d ",p->data);
        Preorder_Traverse(p->lchild);
        Preorder_Traverse(p->rchild);
    }
}

/// Searching :

BST * Iterative_Search(BST *p,int key)
{
    while(p)
    {
        if(p->data==key)
        {
            return p;
        }
        else if(p->data>key)
        {
            p=p->lchild;
        }
        else
        {
            p=p->rchild;
        }
    }
    return p;
}

BST* Recursive_Search(BST *p,int key)
{
    if(p==NULL)
    {
        return NULL;
    }
    else if(p->data>key)
    {
        p=Recursive_Search(p->lchild,key);
    }
    else if(p->data<key)
    {
        p=Recursive_Search(p->rchild,key);
    }
    return p;
}


int main()
{
    int op;
    do
    {
        printf("\n     ***~~~MAIN MENU~~~***\n\n");
        printf("1 for Inserting A Binary Tree.\n");
        printf("2 for for Searching in A Binary Tree.\n");
        printf("3 for Traversing Tree.\n");
        printf("0 for Exit.\n\n");
        printf("Enter Your Option : ");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            printf("\n");
            int op1,x;
            do
            {

                printf("    1 for Insert Element Iteratively.\n");
                printf("    2 for Insert Element Recursively.\n");
                printf("    0 for Exit.\n\n");
                printf("    Enter Your Option : ");

                scanf("%d",&op1);

                switch(op1)
                {

                case 1:
                    printf("\n");
                    printf("    Enter An Integer Number : ");
                    scanf("%d",&x);
                    Iterative_Insert(x);
                    printf("\n");
                    break;

                case 2:
                    printf("\n");
                    printf("    Enter An Integer Number : ");
                    scanf("%d",&x);
                    /*if(root==NULL)
                    {
                        root=Recursive_Insert(root,x);
                    }
                    else
                    {
                        Recursive_Insert(root,x);
                    }*/
                    root=Recursive_Insert(root,x);
                    printf("\n");
                    break;

                default:
                    printf("\n    Enter A Valid Option.\n\n");
                }

            }while(op1!=0);

            printf("\n");
            break;

        case 2:
            printf("\n");
            int op2,key;
            do
            {
                printf("    Enter An Integer Number to Search : ");
                scanf("%d",&key);
                printf("\n\n    1 for Searching Element Iteratively.\n");
                printf("    2 for Searching Element Recursively.\n");
                printf("    0 for Exit.\n\n");
                printf("    Enter Your Option : ");

                scanf("%d",&op2);

                switch(op2)
                {
                case 1:
                    printf("\n");
                    BST *node;
                    node=Iterative_Search(root,key);
                    if(node)
                    {
                        printf("    %d Is Found in Binary Search Tree.\n",key);
                    }
                    else
                    {
                        printf("    %d Is Not Found in Binary Search Tree.\n",key);
                    }
                    printf("\n");
                    break;

                case 2:
                    printf("\n");
                    node=Recursive_Search(root,key);
                    if(node)
                    {
                        printf("    %d Is Found in Binary Search Tree.\n",key);
                    }
                    else
                    {
                        printf("    %d Is Not Found in Binary Search Tree.\n",key);
                    }
                    printf("\n");
                    break;

                default:
                    printf("\n    Enter A Valid Option.\n\n");
                }

            }while(op2!=0);
            printf("\n");
            break;

        case 3:
            printf("\n");
            printf("Tree Elements(Preorder Traversal) : ");
            Preorder_Traverse(root);
            printf("\n");
            break;

        default:
            printf("\nEnter A Valid Option.\n");
        }
    }while(op!=0);

    return 0;
}
