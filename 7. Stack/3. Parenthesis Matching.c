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

struct Expression
{
    char *ex;
    int length;
};

typedef struct Expression Exp;

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

void pop()
{
    stack *p=top;
    char ch=p->data;
    top=top->prev;
    free(p);
    return ch;
}

int Is_Balance(Exp *exp)
{
    int i=0;
    while(exp->ex[i]!='\0')
    {
        if(exp->ex[i]=='(')
        {
            push('(');
        }
        else if(exp->ex[i]==')')
        {
            if(top==NULL)
            {
                return 0;
            }
            else
            {
                pop();
            }
        }
        i+=1;
    }
    if(top==NULL)
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
    Exp exp;
    int t;
    printf("Enter the number of test case : ");
    scanf("%d",&t);
    while(t--)
    {
        printf("\nEnter the number of length of expression : ");
        scanf("%d",&exp.length);
        exp.ex=(char*)malloc((exp.length+1)*sizeof(char));
        printf("Enter an expression : ");
        scanf("%s",exp.ex);

        int result;
        result=Is_Balance(&exp);
        if(result==1)
        {
            printf("The expression is balanced.\n");
        }
        else
        {
            printf("The expression is imbalanced.\n");
        }
    }

    return 0;
}
