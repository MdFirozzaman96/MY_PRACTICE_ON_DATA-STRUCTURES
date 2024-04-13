///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

int Sum(int n)
{
    if(n==1)
    {
        return n;
    }
    else
    {
        return Sum(n-1)+n;
    }
}
int main()
{
    int n;
    printf("Enter an integer number : ");
    scanf("%d",&n);
    printf("The sum of natural numbers up to %d is : %d\n",n,Sum(n));
    return 0;

}
