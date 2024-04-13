///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

int Factorial(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return Factorial(n-1)*n;
    }
}
int main()
{
    int n;
    printf("Enter an integer number : ");
    scanf("%d",&n);
    printf("The value of factorial %d is : %d\n",n,Factorial(n));
    return 0;
}
