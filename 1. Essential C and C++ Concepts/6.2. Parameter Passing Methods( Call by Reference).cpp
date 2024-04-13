///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

void Swap(int &a,int &b)  /// This is called formal parameter.
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=10,b=20;
    Swap(a,b);///This is called actual parameter.
    printf("a : %d, b : %d\n",a,b);
    return 0;
}

