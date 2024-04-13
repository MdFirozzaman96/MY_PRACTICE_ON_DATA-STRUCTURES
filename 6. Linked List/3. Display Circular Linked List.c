///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int *arr;
    int size,length;
};

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node node;

node *first=NULL;

void Create_Linked_List(node *nd,struct Array *Arr)
{
    if(nd==NULL)
    {
        first=(node*)malloc(sizeof(node));
        first->data=Arr->arr[0];
        first->next=NULL;
    }
    node *new_node,*last=first;
    for(int i=1;i<Arr->length;i++)
    {
        new_node=(node*)malloc(sizeof(node));
        new_node->data=Arr->arr[i];
        new_node->next=NULL;
        last->next=new_node;
        last=new_node;
    }
}

void Display()
{
    node *p=first;
    printf("The elements of the linked list : ");
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
void Create_Circular()
{
    node *p=first;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=first;
}
void Circular_Display()
{
    node *p=first;
    printf("The elements of the circular linked list : ");
    do
    {
        printf("%d ",p->data);
        p=p->next;
    }while(p!=first);
    printf("\n");
}
void Recursive_Circular_Display(node *p)
{
    static int flag=0;

    if(p!=first||flag==0)
    {
        flag=1;
        printf("%d ",p->data);
        Recursive_Circular_Display(p->next);
    }
}
void Insert(int pos,int x)
{
    node *new_node;
    new_node=(node*)malloc(sizeof(node));
    new_node->data=x;
    new_node->next=NULL;

    if(pos==0)
    {
        if(first==NULL)
        {
            first=(node*)malloc(sizeof(node));
            first->data=x;
            first->next=first;
        }
        else
        {
            new_node->next=first;
            first=new_node;
        }
    }
    else
    {
        node *p=first;
        for(int i=1;i<pos;i++)
        {
            p=p->next;
        }
        new_node->next=p->next;
        p->next=new_node;
    }
}

int Delete(int pos)
{
    node *n=first,*last;
    while(n->next!=first)
    {
        n=n->next;
    }
    last=n;
    if(first==NULL)
    {
        printf("The linked list is empty.\n");
    }
    else
    {
        node *p=first,*q=p;
        int x;
        if(pos==1)
        {
            first=first->next;
            last->next=first;
        }
        for(int i=1;i<pos;i++)
        {
            q=p;
            p=p->next;
        }
        x=p->data;
        q->next=p->next;
        free(p);
        return x;
    }
}
int main()
{
    int op;

    do
    {
        printf("\n  ***~~~MAIN MENU~~~***\n\n");
        printf("1 for create a linked list.\n");
        printf("2 for display the linked list.\n");
        printf("3 for create a circular linked list.\n");
        printf("4 for circular display.\n");
        printf("5 for recursive circular display.\n");
        printf("6 for insert in a linked list.\n");
        printf("7 for delete.\n");
        printf("0 for exit.\n");
        printf("Enter your option : ");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            printf("\n");
            struct Array Arr;
            int s,n;
            printf("Enter the number of size of the array : ");
            scanf("%d",&s);
            printf("Enter the length of the array : ");
            scanf("%d",&n);
            Arr.length=n;

            Arr.arr=(int*)malloc(s*sizeof(int));
            printf("Enter the elements of the array : ");
            for(int i=0;i<n;i++)
            {
                scanf("%d",&Arr.arr[i]);
            }
            Create_Linked_List(first,&Arr);
            break;

        case 2:
            Display();
            break;

        case 3:
            Create_Circular();
            break;
        case 4:
            Circular_Display();
            break;
        case 5:
            printf("The elements of the linked list : ");
            Recursive_Circular_Display(first);
            printf("Md.Firoszzamn\n");
            break;
        case 6:
            printf("\n");
            int x,pos;
            printf("Enter an integer number to include into node : ");
            scanf("%d",&x);
            printf("Enter the position number where after the node will be inserted : ");
            scanf("%d",&pos);
            Insert(pos,x);
            break;
        case 7:
            printf("\n");
            int pos1;
            printf("Enter the number of node that will be deleted : ");
            scanf("%d",&pos1);
            printf("%d is deleted from the linked list.\n",Delete(pos1));
            break;

        default :

            printf("Enter a valid option.\n");
        }
    }while(op!=0);

    return 0;
}
