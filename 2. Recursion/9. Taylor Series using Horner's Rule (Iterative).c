///***~~~`ALLAH IS ALMIGHTY`~~~***///


#include<stdio.h>

int main()
{
    int x,n,N;
    printf("Enter an integer number and the number of terms : ");
    scanf("%d%d",&x,&n);
    N=n;
    int ex=1;
    while(n>=1)
    {
        printf("%d\n",n);
        ex=ex*(x/n)+1;
        n-=1;
    }
    printf("The %dth terms of the Taylor series for number %d is : %d\n",N,x,ex);
    return 0;
}
