///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

int Power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    else
    {
        return Power(n,p-1)*n;
    }
}
int main()
{
    int n,p;
    printf("Enter an integer number : ");
    scanf("%d",&n);
    printf("Enter a power of the number : ");
    scanf("%d",&p);
    printf("The value of %d power of %d is : %d\n",p,n,Power(n,p));
    return 0;
}
