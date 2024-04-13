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
    char *exp;
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

char pop()
{
    stack *p=top;
    char ch=p->data;
    top=top->prev;
    free(p);
    return ch;

}

int Is_Balance(Exp *Ex)
{
    int i=0;
    while(Ex->exp[i]!='\0')
    {
        printf("%d\n",i);
        if(Ex->exp[i]=='{'||Ex->exp[i]=='('||Ex->exp[i]=='[')
        {
            push(Ex->exp[i]);
        }
        else if(Ex->exp[i]=='}'||Ex->exp[i]==')'||Ex->exp[i]==']')
        {
            if(top==NULL)
            {
                return 0;
            }
            else
            {
                char ch=pop(),ch1=Ex->exp[i];
                printf("ch = %d\nEx->exp[i] : %d\n",ch,Ex->exp[i]);
                if(ch1!=(ch+1)||ch1!=(ch+2))
                {
                    return 0;
                }
                /// {([a*b]/[x*y])}
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

    char a='(',b=')',c='{',d='}',e='[',f=']';
    printf("( : %d, ) : %d\n{ : %d, } : %d\n[ : %d, ] : %d\n",a,b,c,d,e,f);
    Exp Ex;
    printf("Enter the length size of expression : ");
    scanf("%d",&Ex.length);
    printf("Enter an expression : ");
    Ex.exp=(char*)malloc((Ex.length+1)*sizeof(char));
    scanf("%s",Ex.exp);

    if(Is_Balance(&Ex)==1)
    {
        printf("The expression is balanced.\n");
    }
    else
    {
        printf("The expression is imbalanced.\n");
    }

    return 0;
}
