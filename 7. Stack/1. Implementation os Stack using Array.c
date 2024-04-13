///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

struct Stack
{
    int size;
    int top;
    int *st;
};

void Create_Stack(struct Stack *stack)
{
    printf("Enter the maximum size of stack : ");
    scanf("%d",&stack->size);
    stack->top=-1;
    stack->st=(int*)malloc(stack->size*sizeof(int));
}

void Display_Stack(struct Stack *stack)
{
    if(stack->top==-1)
    {
        printf("The stack is empty.\n\n");
    }
    else
    {
        printf("The elements of the stack : ");
        for(int i=0;i<=stack->top;i++)
        {
            printf("%d ",stack->st[i]);
        }
        printf("\n");
    }
}

void Push(struct Stack *stack,int x)
{
    if(stack->top+1==stack->size)
    {
        printf("Stack Overflow.\n");
    }
    else
    {
        stack->top+=1;
        stack->st[stack->top]=x;
    }
}

int Pop(struct Stack *stack)
{

    int x=-1;
    if(stack->top==-1)
    {
        printf("Stack Underflow.\n");
    }
    else
    {
        x=stack->st[stack->top];
        stack->top-=1;
        return x;
    }
    return x;
}

int  Peek(struct Stack *stack,int pos)
{
    int x=-1;
    if(stack->top-(pos-1)<0)
    {
        printf("Invalid Position.\n");
    }
    else
    {
        x=stack->st[stack->top-(pos-1)];
    }
    printf("Peek Result : %d\n",x);
    return x;
}

int Top_Element(struct Stack *stack)
{
    int x=-1;
    if(stack->top==-1)
    {
        printf("Stack is empty.There is no element at top position of the stack.\n");
    }
    else
    {
        x=stack->st[stack->top];
    }
    return x;
}

int Is_Empty(struct Stack *stack)
{
    if(stack->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Is_Full(struct Stack *stack)
{
    if(stack->top==stack->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int op;
    do
    {
        printf("\n  ***~~~MAIN MENU~~~***\n\n");
        printf("1 for creating a stack.\n");
        printf("2 for displaying stack.\n");
        printf("3 for push.\n");
        printf("4 for pop.\n");
        printf("5 for peek.\n");
        printf("6 for stack top.\n");
        printf("7 for checking empty condition of stack.\n");
        printf("8 for checking full condition of stack.\n");
        printf("0 for exit.\n\n");
        printf("Enter your option : ");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            printf("\n");
            struct Stack stack;
            Create_Stack(&stack);
            break;

        case 2:
            printf("\n");
            Display_Stack(&stack);
            break;

        case 3:
            printf("\n");
            int x;
            printf("Enter an integer number to insert into the stack : ");
            scanf("%d",&x);
            Push(&stack,x);
            break;

        case 4:
            printf("\n");
            int t;
            t=Pop(&stack);
            if(t!=-1)
            {
                printf("The top element %d is popped from the stack.\n",t);
            }
            break;

        case 5:
            printf("\n");
            int pk,pos;
            printf("Enter a position number to peek element from the stack : ");
            scanf("%d",&pos);
            pk=Peek(&stack,pos);
            if(pk>-1)
            {
                printf("The element at position %d is %d.\n",pos,pk);
            }
            break;

        case 6:
            printf("\n");
            int tp=Top_Element(&stack);
            if(tp>-1)
            {
                printf("The top element of the stack is %d.\n",tp);
            }
            break;

        case 7:
            if(Is_Empty(&stack)==1)
            {
                printf("The stack is empty.\n");
            }
            else
            {
                printf("The stack is not empty.\n");
            }
            break;

        case 8:
            if(Is_Full(&stack)==1)
            {
                printf("The stack is full.\n");
            }
            else
            {
                printf("The stack is not full.\n");
            }
            break;

        default :

            printf("Enter a valid option.\n");

        }
    }while(op!=0);

    return 0;
}
