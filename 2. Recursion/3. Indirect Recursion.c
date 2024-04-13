///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

void B(int n);

void A(int n)
{
    if(n>0)
    {
        printf("%d\n",n);
        B(n-1);
    }
}

void B(int n)
{
    if(n>0)
    {
        printf("%d\n",n);
        A(n/2);
    }
}

int main()
{
    int n;
    printf("Enter an integer number : ");
    scanf("%d",&n);
    A(n);
    return 0;
}
