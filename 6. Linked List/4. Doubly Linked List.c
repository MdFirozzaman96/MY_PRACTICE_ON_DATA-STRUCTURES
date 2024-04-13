///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};

typedef struct Node Dnode;

struct Array
{
    int *arr;
    int size,length;
};

Dnode *first=NULL,*last=NULL;

void Create_Doubly(struct Array *Ar)
{
    if(first==NULL)
    {
        first=(Dnode*)malloc(sizeof(Dnode));
        first->prev=NULL;
        first->data=Ar->arr[0];
        first->next=NULL;
    }
    Dnode *new_node,*p=first;
    for(int i=1;i<Ar->length;i++)
    {
        new_node=(Dnode*)malloc(sizeof(Dnode));
        new_node->data=Ar->arr[i];
        p->next=new_node;
        new_node->prev=p;
        new_node->next=NULL;
        p=p->next;
        last=new_node;
    }
}

void Doubly_Display()
{
    Dnode *p=first;
    printf("The elements of doubly linked list : ");
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

void Reverse_Display()
{
    Dnode *p=last;
    printf("The elements of the doubly linked list in reverse order : ");
    while(p)
    {
        printf("%d ",p->data);
        p=p->prev;
    }
    printf("\n");
}

void Insert(int pos,int x,struct Array *Ar)
{
    if(pos<0||pos>Ar->length)
    {
        printf("The position number is out of bound of the doubly linked list.");
    }
    else
    {
        if(first==NULL)
        {
            printf("The doubly linked list is empty.\n");
        }
        else
        {
            Dnode *new_node,*p=first;
            new_node=(Dnode*)malloc(sizeof(Dnode));
            new_node->data=x;
            if(pos==0)
            {
                new_node->next=first;
                first->prev=new_node;
                first=new_node;
            }
            else if(pos==Ar->length)
            {
                for(int i=1;i<Ar->length;i++)
                {
                    p=p->next;
                }
                p->next=new_node;
                new_node->prev=p;
                last=new_node;
            }
            else
            {
                Dnode *q;
                for(int i=1;i<=pos;i++)
                {
                    q=p;
                    p=p->next;
                }
                ///3 4 5 6 7
                new_node->prev=q;
                q->next=new_node;
                new_node->next=p;
                p->prev=new_node;
            }
        }
    }
    Ar->length+=1;
    printf("array length : %d\n",Ar->length);
}
int Delete(int pos,struct Array *Ar)
{
    if(pos<=0||pos>Ar->length)
    {
        printf("There is no node in this position.\n");
    }
    else
    {
        if(first==NULL)
        {
            printf("The doubly linked list is empty.\n");
        }
        else
        {
            Dnode *p=first,*q;
            int x;
            if(pos==1)
            {
                first=first->next;
                first->prev=NULL;
            }
            else if(pos==Ar->length)
            {
                for(int i=1;i<Ar->length;i++)
                {
                    q=p;
                    p=p->next;
                }
                q->next=NULL;
            }
            else
            {
                Dnode *r;
                for(int i=1;i<pos;i++)
                {
                    q=p;
                    p=p->next;
                    r=p->next;
                }
                q->next=p->next;
                r->prev=q;
            }

            x=p->data;
            free(p);
            Ar->length-=1;
            return x;
        }
    }

}
void Reverse_Doubly()
{
    Dnode *p=first,*q;
    p->prev=p->next;
    p->next=NULL;
    p=p->prev;
    while(p)
    {
        q=p->prev;
        p->prev=p->next;
        p->next=q;
        first=p;
        p=p->prev;
    }

}
int main()
{
    int op;
    do
    {
        printf("\n  ***~~~MAIN MENU~~~***\n\n");
        printf("1 for create a doubly linked list.\n");
        printf("2 for display the doubly linked list.\n");
        printf("3 for display elements in reverse order.\n");
        printf("4 for insert element into the doubly linked list.\n");
        printf("5 for delete element from the doubly linked list.\n");
        printf("6 for delete element from the doubly linked list using one pointer.\n");
        printf("7 for reverse doubly linked list.\n");
        printf("0 for exit.\n");
        printf("\nEnter your option : ");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            printf("\n");
            int s,n;
            struct Array Ar;
            printf("Enter the size of array : ");
            scanf("%d",&s);
            Ar.arr=(int*)malloc(s*sizeof(int));
            printf("Enter the number of elements of the array : ");
            scanf("%d",&n);
            printf("Enter array elements : ");
            for(int i=0;i<n;i++)
            {
                scanf("%d",&Ar.arr[i]);
            }
            Ar.length=n;
            Create_Doubly(&Ar);
            break;

        case 2:
            Doubly_Display();
            break;
        case 3:
            Reverse_Display();
            break;

        case 4:
            printf("\n");
            int x,pos;
            printf("Enter an integer number to insert to the doubly linked node : ");
            scanf("%d",&x);
            printf("Enter a position number where the doubly linked node will be inserted : ");
            scanf("%d",&pos);
            Insert(pos,x,&Ar);
            break;

        case 5:
            printf("\n");
            int pos1;
            printf("Enter a position number of node that you want to delete : ");
            scanf("%d",&pos1);
            printf("%d is deleted from the doubly linked list.\n",Delete(pos1,&Ar));
            break;

        case 6:

            break;

        case 7:
            Reverse_Doubly();
            break;

        default:
            printf("Enter a valid option.\n");
        }
    }while(op!=0);

    return 0;
}
