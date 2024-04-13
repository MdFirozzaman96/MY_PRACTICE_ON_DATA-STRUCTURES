///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node node;

struct Array
{
    int *arr;
    int size,length;
};

node *first=NULL,*last=NULL;

node* Create(int x)
{
    if(first==NULL)
    {
        first=(node*)malloc(sizeof(node));
        first->data=x;
        first->next=NULL;
        last=first;
        return first;
    }
    else
    {
        node *new_node;
        new_node=(node*)malloc(sizeof(node));
        new_node->data=x;
        new_node->next=NULL;
        return new_node;
    }
}
void Display()
{
    if(first==NULL)
    {
        printf("There are no elements in the linked list.\n");
    }
    else
    {
        node *p;
        p=first;
        printf("The elements of the linked list are : ");
        while(p)
        {
            printf("%d ",p->data);
            p=p->next;
        }
        printf("\n");
    }
}
void Insert_Beg(node *nd)
{
    nd->next=first;
    first=nd;
}
void Insert_Last(node *nd)
{
    last->next=nd;
    last=nd;
}
void Insert_Given(node *nd,int pos)
{
    node *p=first;
    for(int i=1;i<pos;i++)
    {
        p=p->next;
    }
    nd->next=p->next;
    p->next=nd;
}
void Insert_Sorted_List(node *p,node *nd)
{
    node *q=NULL;
    while(p&&p->data<=nd->data)
    {
        q=p;
        p=p->next;
        printf("Firozzaman\n");
    }
    nd->next=q->next;
    q->next=nd;
    printf("q data : %d\n",q->data);
    //nd->next=p;
}
int Delete_First()
{
    node *p=first;
    int x=first->data;
    first=first->next;
    free(p);
    return x;
}
int Delete_Position(int pos)
{
    node *p=first,*q=NULL;
    for(int i=1;i<pos;i++)
    {
        q=p;
        p=p->next;
    }
    int x=p->data;
    q->next=p->next;
    free(p);
    return x;
}
int Is_Sorted()
{
    node *p=first;
    int x=first->data;
    while(p)
    {
        if(x>p->data)
        {
            return 0;
        }
        x=p->data;
        p=p->next;
    }
    return 1;
}
void Remove_Duplicate()
{
    node *p=first->next,*q=first;

    while(p!=NULL)
    {
        if(p->data==q->data)
        {
            q->next=p->next;
            free(p);
            p=q->next;
        }
        else
        {
            q=p;
            p=p->next;
        }

    }
}
int Count_Node()
{
    node *p=first;
    int c=0;
    while(p)
    {
        c+=1;
        p=p->next;
    }
    return p;
}
void Reverse_List_Array(struct Array *Ar)
{
    node *p=first;
    int i=0;
    while(p)
    {
        Ar->arr[i]=p->data;
        i+=1;
        p=p->next;
    }
    i-=1;
    p=first;
    while(p)
    {
        p->data=Ar->arr[i];
        i-=1;
        p=p->next;
    }
}

void Reverse_Sliding()
{
    node *p=first,*q=NULL,*r=NULL;
    while(p)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

void Recursive_Reverse(node *p,node *q)
{
    if(p)
    {
        Recursive_Reverse(p->next,p);
        p->next=q;
    }
    else
    {
        first=q;
    }
}
int main()
{
    int option;
    do
    {
        printf("\n  ***~~~ MAIN MENU ~~~***\n\n");
        printf("1 for creating a linked list.\n");
        printf("2 for inserting a node into the linked list.\n");
        printf("3 for displaying the linked list.\n");
        printf("4 for deleting node.\n");
        printf("5 for checking a sorted list.\n");
        printf("6 for remove duplicate elements in a sorted list.\n");
        printf("7 for reverse a linked list.\n");
        printf("0 for exit.\n");

        printf("\nEnter your option : ");
        scanf("%d",&option);
        int x,pos;
        node *nd;
        switch(option)
        {
        case 1:
            printf("Enter an integer number to input to the node : ");
            scanf("%d",&x);
            nd=Create(x);
            printf("nd data : %d\n",nd->data);
            break;
        case 2:
            printf("\n");
            int op;
            do
            {
                printf("    1 for insert before first node.\n");
                printf("    2 for insert after last node.\n");
                printf("    3 for insert at at a given position.\n");
                printf("    4 for insert in a sorted list.\n");
                printf("    0 for exit.\n");
                printf("    Enter your option : ");
                scanf("%d",&op);
                switch(op)
                {
                case 1:
                    Insert_Beg(nd);
                    break;
                case 2:
                    Insert_Last(nd);
                    break;
                case 3:
                    printf("Enter a position number after that the node will be inserted : ");
                    scanf("%d",&pos);
                    Insert_Given(nd,pos);
                    break;
                case 4:
                    Insert_Sorted_List(first,nd);
                    break;

                default:
                    printf("Enter a valid option.\n");
                    break;
                }
            }while(op!=0);

            break;
        case 3:
            Display();
            break;
        case 4:
            printf("\n");
            int op1,pos;
            do
            {
                printf("    1 for delete first node.\n");
                printf("    2 for delete a node at a given position.\n");
                printf("    0 for exit.\n");
                printf("    Enter your option : ");
                scanf("%d",&op1);
                switch(op1)
                {
                case 1:
                    printf("    Deleted node's data : %d\n",Delete_First());
                    break;
                case 2 :
                    printf("    Enter the position number of the node to delete : ");
                    scanf("%d",&pos);
                    printf("    Deleted node's data : %d\n",Delete_Position(pos));
                    break;
                default :
                    printf("    Enter your option : ");
                }
            }while(op1!=0);

            break;

        case 5:
            printf("\n");
            if(Is_Sorted()==1)
            {
                printf("The list is sorted.\n");
            }
            else
            {
                printf("The list is not sorted.\n");
            }
            break;
        case 6:
            printf("\n");
            Remove_Duplicate();
            break;

        case 7:
            printf("\n");
            int op2,s,n;
            do
            {
                printf("    1 for reversing linked list using by an array.\n");
                printf("    2 for reversing using sliding pointers.\n");
                printf("    3 for reversing linked list by changing address using recursion.\n");
                printf("    0 to exit.\n");
                printf("    Enter your option : ");
                scanf("%d",&op2);
                switch(op2)
                {
                case 1:
                    printf("    Enter the size of the array : ");
                    scanf("%d",&s);
                    struct Array Ar;
                    Ar.arr=(int*)malloc(s*sizeof(int));
                    n=Count_Node();
                    Ar.length=n;
                    Reverse_List_Array(&Ar);

                    break;
                case 2:
                    Reverse_Sliding();
                    break;
                case 3:
                    Recursive_Reverse(first,NULL);
                    break;

                default:
                    printf("    Enter a valid option.\n");

                }
            }while(op2!=0);

        default:
            printf("Enter a valid option.\n");
        }
    }while(option!=0);

    return 0;
}

