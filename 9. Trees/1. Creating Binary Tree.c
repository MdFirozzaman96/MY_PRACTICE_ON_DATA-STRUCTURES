///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    struct Node *left_child;
    int data;
    struct Node *right_child;
};

typedef struct Node node;

node *root=NULL;

struct Queue
{
    int size;
    int front;
    int rear;
    node **q;
};

typedef struct Queue queue;

void Create_Queue(queue *Q)
{
    Q->front=Q->rear=0;
    printf("Enter the number of size of the queue : ");
    scanf("%d",&Q->size);
    Q->q=(node**)malloc(Q->size*(sizeof(node*)));

    //printf("Q->size : %d\n",Q->size);
}

void Enqueue(queue *Q,node *n)
{
    if((Q->rear+1)%Q->size==Q->front)
    {
        printf("The queue is full.\n");
    }
    else
    {
        Q->rear=(Q->rear+1)%Q->size;
        Q->q[Q->rear]=n;
    }
    printf("Q->front : %d, Q->rear : %d\n",Q->front,Q->rear);
}

node* Dequeue(queue *Q)
{
    node *nd=NULL;
    if(Q->front==Q->rear)
    {
        printf("The queue is empty.\n");
    }
    else
    {
        Q->front=(Q->front+1)%Q->size;
        nd=Q->q[Q->front];
    }
    return nd;
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

void Display_Queue(queue *Q)
{
    int i=Q->front;
    printf("\nThe Queue Is : ");
    while(i!=Q->rear)
    {
        i=(i+1)%Q->size;
        printf("%d ",Q->q[i]->data);
    }
    printf("\n");
}

void Create_Binary_Tree()
{
    queue Q;
    Create_Queue(&Q);
    node *p;
    int x;
    printf("Enter a root value : ");
    scanf("%d",&x);
    root=(node*)malloc(sizeof(node));
    root->data=x;
    root->left_child=NULL;
    root->right_child=NULL;
    Enqueue(&Q,root);
    while(!Is_Empty(&Q))
    {
        p=Dequeue(&Q);
        printf("Enter left child of %d : ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            node *l;
            l=(node*)malloc(sizeof(node));
            l->data=x;
            l->left_child=NULL;
            l->right_child=NULL;
            p->left_child=l;
            Enqueue(&Q,l);

        }
        printf("Enter right child of %d : ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            node *r;
            r=(node*)malloc(sizeof(node));
            r->data=x;
            r->left_child=NULL;
            r->right_child=NULL;
            p->right_child=r;
            Enqueue(&Q,r);
        }
        int x;
        printf("Enter 1 to see the data of the queue : ");
        scanf("%d",&x);
        if(x==1)
        {
            Display_Queue(&Q);
        }
    }
}

void Pre_Order(node *p)
{
    if(p)
    {
        printf("%d ",p->data);
        Pre_Order(p->left_child);
        Pre_Order(p->right_child);
    }
}

int main()
{
    Create_Binary_Tree();
    printf("\nPreOrder Traversal : ");
    Pre_Order(root);
}

