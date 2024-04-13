///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

void Swap(int *a,int *b)  /// Formal parameter can not change the value of formal parameter.This can be dome by pointer.
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=10,b=20;
    Swap(&a,&b);
    printf("a : %d, b : %d\n",a,b);
    return 0;
}

