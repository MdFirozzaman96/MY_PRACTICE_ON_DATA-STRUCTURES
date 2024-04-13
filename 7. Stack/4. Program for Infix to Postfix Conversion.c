///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>
#include<stdlib.h>

struct Stack
{
    char data;
    struct Stack *prev;
};

typedef struct Stack stack;

stack *top=NULL;

struct Infix
{
    char *infix;
    int length;
};

int Is_Operand(char ch)
{
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int Precedance(char ch)
{
    if(ch=='+'||ch=='-')
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

void push(char ch)
{
    stack *new_node;
    new_node=(stack*)malloc(sizeof(stack));
    new_node->data=ch;
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

char pop()
{
    stack *p=top;
    char ch=p->data;
    top=top->prev;
    free(p);
    return ch;
}

int Is_Empty()
{
    if(top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char* Infix_to_Postfix(struct Infix *inx)
{
    int i=0,j=0;
    char *postfix=(char*)malloc((inx->length+1)*sizeof(char));

    while(inx->infix[i]!='\0')
    {
        if(Is_Operand(inx->infix[i]))
        {
            postfix[j++]=inx->infix[i++];
        }
        else
        {
            if(top==NULL||Precedance(inx->infix[i])>Precedance(top->data))
            {
                push(inx->infix[i++]);
            }
            else
            {
                postfix[j++]=pop();
            }
        }
    }
    while(!Is_Empty())
    {
        postfix[j++]=pop();
    }
    postfix[j]='\0';

    return postfix;
}

int main()
{
    struct Infix Inx;
    printf("Enter the length of infix expression : ");
    scanf("%d",&Inx.length);
    Inx.infix=(char*)malloc((Inx.length+1)*sizeof(char));
    printf("Enter an infix expression : ");
    scanf("%s",Inx.infix);

    char *pst=Infix_to_Postfix(&Inx);

    printf("The postfix expression of %s is : ",Inx.infix);
    for(int i=0;pst[i]!='\0';i++)
    {
        printf("%c",pst[i]);
    }
    printf("\n");

    return 0;
}
