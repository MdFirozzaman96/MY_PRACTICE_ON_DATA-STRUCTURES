///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>

using namespace std;

int main()
{
    printf("Array creation inside the stack.\n\n");
    int arr[5],i;
    printf("Enter 5 integer numbers : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n\nArray creation into the heap.\n\n");
    int *p;
    p=(int *)malloc(5*sizeof(int));
    printf("Enter 6 integer numbers : ");
    for(i=0;i<6;i++)
    {
        scanf("%d",&p[i]);
    }
    free(p);
    return 0;
}
