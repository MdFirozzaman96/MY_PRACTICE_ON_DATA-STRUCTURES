///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

struct Stack
{
    int data;
    struct Stack *prev;
};

typedef struct Stack stack;

stack *top=NULL;

struct Postfix
{
    char *postfix;
    int length;
};

void push(int x)
{
    stack *new_node;
    new_node=(stack*)malloc(sizeof(stack));
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

int pop()
{
    stack *p=top;
    int x=p->data;
    top=top->prev;
    free(p);
    return x;
}

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

int Postfix_Evaluation(struct Postfix *Post)
{
    int i=0;
    while(Post->postfix[i]!='\0')
    {
        ///printf("%d\n",i);
        if(Is_Operand(Post->postfix[i]))
        {
            push(Post->postfix[i]-'0');
        }
        else
        {
            int x,y,result;
            y=pop();
            x=pop();
            switch(Post->postfix[i])
            {
            case '+':
                result=x+y;
                break;

            case '-':
                result=x-y;
                break;

            case '*':
                result=x*y;
                break;

            case '/':
                result=x/y;
                break;
            }
            push(result);
        }
        i+=1;
    }

    return pop();
}
int main()
{
    struct Postfix Post;
    printf("Enter a maximum length of the postfix expression : ");
    scanf("%d",&Post.length);
    printf("Enter a postfix expression : ");
    Post.postfix=(char*)malloc((Post.length+1)*sizeof(char));
    scanf("%s",Post.postfix);
    printf("The evaluation result of the postfix expression is : %d\n",Postfix_Evaluation(&Post));
    return 0;
}
