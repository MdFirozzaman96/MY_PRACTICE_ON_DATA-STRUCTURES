///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>
#include<stdlib.h>

struct Binary_Tree
{
    int data;
    struct Binary_Tree *left_child;
    struct Binary_Tree *right_child;
};

typedef struct Binary_Tree BT;

BT *root=NULL;

struct Queue
{
    int size;
    int front;
    int rear;
    BT **q;
};

typedef struct Queue queue;

struct Stack
{
    int size;
    int top;
    BT **st;
};

typedef struct Stack stack;

stack St;

void Create_Queue(queue *Q)
{
    printf("Enter A Size of The Queue : ");
    scanf("%d",&Q->size);
    Q->q=(BT**)malloc(Q->size*(sizeof(BT*)));
    Q->front=Q->rear=0;
    printf("\n");
}

void Enqueue(queue *Q,BT *node)
{
    if((Q->rear+1)%Q->size==Q->front)
    {
        printf("The Queue Is Full.\n");
    }
    else
    {
        Q->rear=(Q->rear+1)%Q->size;
        Q->q[Q->rear]=node;
    }
}

BT* Dequeue(queue *Q)
{
    BT *node=NULL;
    if(Q->front==Q->rear)
    {
        printf("The Queue Is Empty.\n");
    }
    else
    {
        Q->front=(Q->front+1)%Q->size;
        node=Q->q[Q->front];
    }
    return node;
}
int Is_Empty(queue *Q)
{
    if(Q->front==Q->rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/// Creating A Binary Tree :

void Create_Binary_Tree(queue *Q)
{
    BT *p,*lchild=NULL,*rchild=NULL;
    int x;

    Create_Queue(Q);
    root=(BT*)malloc(sizeof(BT));
    printf("Enter A Root Value : ");
    scanf("%d",&x);
    root->data=x;
    root->left_child=NULL;
    root->right_child=NULL;
    p=root;
    Enqueue(Q,root);

    while(!Is_Empty(Q))
    {
        p=Dequeue(Q);
        printf("Enter The Left Child of %d : ",p->data);
        scanf("%d",&x);
        if(x!=0)
        {
            lchild=(BT*)malloc(sizeof(BT));
            lchild->data=x;
            lchild->left_child=NULL;
            lchild->right_child=NULL;
            p->left_child=lchild;
            Enqueue(Q,lchild);
        }
        printf("Enter The right Child of %d : ",p->data);
        scanf("%d",&x);
        if(x!=0)
        {
            rchild=(BT*)malloc(sizeof(BT));
            rchild->data=x;
            rchild->left_child=NULL;
            rchild->right_child=NULL;
            p->right_child=rchild;
            Enqueue(Q,rchild);
        }
    }
}

/// Traversing :

void Preorder(BT *p)
{
    if(p)
    {
        printf("%d ",p->data);
        Preorder(p->left_child);
        Preorder(p->right_child);
    }
}

void Inorder(BT *p)
{
    if(p)
    {
        Inorder(p->left_child);
        printf("%d ",p->data);
        Inorder(p->right_child);
    }
}
void Postorder(BT *p)
{
    if(p)
    {
        Postorder(p->left_child);
        Postorder(p->right_child);
        printf("%d ",p->data);
    }
}

void Level_Order(queue *Q,BT *p)
{
    if(p)
    {
        printf("%d ",p->data);
        if(p->left_child->data!=0)
        {
            Enqueue(Q,p->left_child);
        }
        if(p->right_child->data!=0)
        {
            Enqueue(Q,p->right_child);
        }
        Level_Order(Q,Dequeue(Q));
    }
}

/// Creating A Stack :

void Create_Stack(queue *Q)
{
    St.size=Q->size;
    St.st=(BT**)malloc((St.size)*sizeof(BT*));
    St.top=-1;
}

void Push_Stack(BT *p)
{
    St.top=St.top+1;
    St.st[St.top]=p;
}

BT * Pop_Stack()
{
    BT *tp=St.st[St.top];
    St.top=St.top-1;
    return tp;
}

void Iterative_Preorder(BT *p)
{
    printf("Iterative Preorder Traversal : ");
    while(p||St.top!=-1)
    {
        if(p)
        {
            printf("%d ",p->data);
            Push_Stack(p);
            p=p->left_child;
        }
        else
        {
            p=Pop_Stack();
            p=p->right_child;
        }
    }
}

void Iterative_Inorder(BT *p)
{
    printf("Iterative Inorder Traversal : ");
    while(p||St.top!=-1)
    {
        if(p)
        {
            Push_Stack(p);
            p=p->left_child;
        }
        else
        {
            p=Pop_Stack();
            printf("%d ",p->data);
            p=p->right_child;
        }
    }
}

void Iterative_Level_Order(queue *Q,BT *p)
{
    printf("Level Order Traversal : ");
    Enqueue(Q,p);
    while(!Is_Empty(Q))
    {
        p=Dequeue(Q);
        printf("%d ",p->data);
        if(p->left_child)
        {
            Enqueue(Q,p->left_child);
        }
        if(p->right_child)
        {
            Enqueue(Q,p->right_child);
        }
    }
}

int main()
{
    int op;
    do
    {
        printf("\n    ***~~~MAIN MENU~~~***\n\n");
        printf("1 for Creating A Binary Tree.\n");
        printf("2 for Traversing Tree.\n");
        printf("0 for Exit\n\n");
        printf("Enter An Option : ");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            printf("\n");
            queue Q;
            Create_Binary_Tree(&Q);
            printf("\n");
            break;

        case 2:
            printf("\n");
            int op1;
            do
            {
                printf("    1 for Recursive Traversing.\n");
                printf("    2 for Iterative Traversing.\n");
                printf("    0 for Exit.\n\n");
                printf("    Enter Your Option : ");
                scanf("%d",&op1);
                switch(op1)
                {
                case 1:
                    printf("\n");
                    int op2;
                    do
                    {
                        printf("        1 for Preorder Traversing.\n");
                        printf("        2 for Inorder Traversing.\n");
                        printf("        3 for Postorder Traversing.\n");
                        printf("        4 for Level Order Traversing.\n");
                        printf("        0 for Exit.\n\n");
                        printf("        Enter Your Option : ");
                        scanf("%d",&op2);
                        switch(op2)
                        {
                        case 1:
                            printf("\n        Elements Are Preorder Manner : ");
                            Preorder(root);
                            printf("\n\n");
                            break;

                        case 2:
                            printf("\n        Elements Are Inorder Manner : ");
                            Inorder(root);
                            printf("\n\n");
                            break;
                        case 3:
                            printf("\n        Elements Are Postorder Manner : ");
                            Postorder(root);
                            printf("\n\n");
                            break;

                        case 4:
                            printf("\n        Elements Are Level Order Manner : ");
                            Level_Order(&Q,root);
                            printf("\n");
                            break;

                        default:
                            printf("\n        Enter A Valid Option.\n");
                        }

                    }while(op2!=0);

                    printf("\n");
                    break;

                case 2:
                    printf("\n");
                    int op3;
                    Create_Stack(&Q);
                    do
                    {
                        printf("        1 for Preorder Traversing.\n");
                        printf("        2 for Inorder Traversing.\n");
                        printf("        3 for Postorder Traversing.\n");
                        printf("        4 for Level Order Traversing.\n");
                        printf("        0 for Exit.\n\n");
                        printf("        Enter Your Option : ");
                        scanf("%d",&op3);
                        switch(op3)
                        {
                        case 1:
                            printf("\n        Elements Are Preorder Manner : ");
                            Iterative_Preorder(root);
                            printf("\n");
                            break;

                        case 2:
                            printf("\n        Elements Are Inorder Manner : ");
                            Iterative_Inorder(root);
                            printf("\n");
                            break;
                        case 3:
                            printf("\n        Elements Are Postorder Manner : ");
                            //Iterative_Postorder(root);
                            printf("\n");
                            break;

                        case 4:
                            printf("\n        Elements Are Level Order Manner : ");
                            Iterative_Level_Order(&Q,root);
                            printf("\n");
                            break;

                        default:
                            printf("\n        Enter A Valid Option.\n");
                        }
                    }while(op3!=0);

                    printf("\n");
                    break;

                default:
                    printf("\nEnter A Valid Option.\n");
                }
            }while(op1!=0);
            printf("\n");
            break;

        default :
            printf("\nEnter A Valid Option.\n");
        }
    }while(op!=0);

    return 0;
}
