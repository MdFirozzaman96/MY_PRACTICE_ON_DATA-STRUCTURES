///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>

using namespace std;

int main()
{
    int *p,*q,i;

    printf("Enter 3 integer numbers : ");

    p=(int*)malloc(3*sizeof(int));
    q=(int*)malloc(6*sizeof(int));

    for(i=0;i<3;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=0;i<3;i++)
    {
        q[i]=p[i];
    }
    free(p);
    p=q;
    q=NULL;
    /*for(i=0;i<6;i++)
    {
        printf("%d ",p[i]);/// We can not use NULL q;
    }*/
    printf("Elements of p : ");
    for(i=0;i<6;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\n");

    return 0;
}
