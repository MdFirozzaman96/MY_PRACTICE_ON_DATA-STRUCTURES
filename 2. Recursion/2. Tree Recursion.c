///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

int Call=0;
void Tree_Recursion(int n)
{
    static int call=0;
    Call+=1;
    call+=1;
    if(n<=0)
    {
        return;
    }
    else
    {
        printf("Number of function call : %d ; n : %d\n",call,n);
        Tree_Recursion(n-1);
        printf("%d\n",n);
        Tree_Recursion(n-1);
    }
}
int main()
{
    int n;
    printf("Enter an integer number : ");
    scanf("%d",&n);
    Tree_Recursion(n);
    printf("Total number of function call : %d\n",Call);
    return 0;
}
