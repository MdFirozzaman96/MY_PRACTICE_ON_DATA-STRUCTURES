///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

int call=0;

int Fun(int n)
{
    call+=1;
    if(n>100)
    {
        return n-10;
    }
    else
    {
        Fun(Fun(n+11));
    }
}
int main()
{
    int n;
    printf("Enter an integer number : ");
    scanf("%d",&n);
    printf("%d\n",Fun(n));
    printf("Total number of function calls : %d\n",call);
    return 0;
}
