///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>
#include<stdlib.h>

int * Arr(int n)
{
    int *P;
    P=(int*)malloc(n*sizeof(int));
    return P;
}
int main()
{
    int *A;
    A=Arr(5);
    A[0]=130;
    printf("%d\n",A[0]);
    return 0;
}
