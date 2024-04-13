///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

struct Stack
{
    int data;
    struct Stack *prev;
};

typedef struct Stack stack;

stack *top=NULL;

void push(int x)
{
    stack *new_node;
    new_node=(stack*)malloc(sizeof(stack));
    if(new_node==NULL)
    {
        printf("Stack Overflow.\n");
    }
    else
    {
        new_node->data=x;
        if(top==NULL)
        {
            new_node->prev=NULL;
        }
        else
        {
            new_node->prev=top;
        }
        top=new_node;
    }
}

void Display()
{
    if(top==NULL)
    {
        printf("The stack is empty.\n");
    }
    else
    {
        stack *p=top;
        printf("Elements of the stack : ");
        while(p)
        {
            printf("%d ",p->data);
            p=p->prev;
        }
        printf("\n");
    }
}
int pop()
{
    int x=-1;
    if(top==NULL)
    {
        printf("Stack Underflow.\n");
    }
    else
    {
        stack *p=top;
        x=p->data;
        top=top->prev;
        free(p);
    }
    return x;
}

int peek(int pos)
{
    int x=-1;
    if(top==NULL)
    {
        printf("The stack is empty.\n");
    }
    else
    {
        stack *p=top;
        for(int i=1;i<pos;i++)
        {
            p=p->prev;
        }
        x=p->data;
    }
    return x;
}

int Stack_Top()
{
    int x=-1;
    if(top==NULL)
    {
        printf("The stack is empty.\n");
    }
    else
    {
        x=top->data;
    }
    return x;
}

void Is_Empty()
{
    if(top==NULL)
    {
        printf("The stack is empty.\n");
    }
    else
    {
        printf("The stack is not empty.\n");
    }
}

void Is_Full()
{
    stack *new_node;
    new_node=(stack*)malloc(sizeof(stack));
    if(new_node==NULL)
    {
        printf("The stack is full.\n");
    }
    else
    {
        printf("The stack is not full.\n");
        free(new_node);
    }
}

int main()
{
    int op;
    do
    {
        printf("\n  ***~~~MAIN MENU~~~***\n\n");
        printf("1 for push.\n");
        printf("2 for displaying stack.\n");
        printf("3 for pop.\n");
        printf("4 for peek.\n");
        printf("5 for stack top.\n");
        printf("6 for checking empty condition of stack.\n");
        printf("7 for checking full condition of stack.\n");
        printf("0 for exit.\n\n");
        printf("Enter your option : ");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            printf("\n");
            int x;
            printf("Enter an integer number to to push into the stack : ");
            scanf("%d",&x);
            push(x);
            break;

        case 2:
            printf("\n");
            Display();
            break;

        case 3:
            printf("\n");
            int t=pop();
            if(t>-1)
            {
                printf("%d is deleted from the top of the stack.\n",t);
            }
            break;

        case 4:
            printf("\n");
            int pk,pos;
            printf("Enter the position number of element of the stack to peek : ");
            scanf("%d",&pos);
            pk=peek(pos);
            if(pk>-1)
            {
                printf("The element at position %d is %d.\n",pos,pk);
            }
            break;

        case 5:
            printf("\n");
            int tp=Stack_Top();
            if(tp>-1)
            {
                printf("The top element of the stack is : %d.\n",tp);
            }
            break;

        case 6:
            Is_Empty();
            break;

        case 7:
            Is_Full();
            break;

        default:

            printf("Enter a valid option.\n");

        }

    }while(op!=0);

    return 0;
}

