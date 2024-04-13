///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>


int fun(int n)
{
    static int x=0;
    printf("The value of x is : %d\n",x);
    if(n>0)
    {
        x+=1;
        return fun(n-1)+x;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("Enter an integer number : ");
    scanf("%d",&n);
    printf("%d\n",fun(n));
    return 0;

}
