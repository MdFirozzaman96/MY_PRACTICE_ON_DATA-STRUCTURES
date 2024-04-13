///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

int Taylor(int x,int n)
{
    static int p=1,f=1;
    if(n==0)
    {
        return 1;
    }
    else
    {
        int e;
        e=Taylor(x,n-1);
        f*=n;
        p*=x;
        return e+(p/f);
    }
}
int main()
{
    int x,n;
    printf("Enter an integer number and the nth term of that number : ");
    scanf("%d%d",&x,&n);
    printf("The Taylor series of %dth term is : %d\n",n,Taylor(x,n));
    return 0;
}
