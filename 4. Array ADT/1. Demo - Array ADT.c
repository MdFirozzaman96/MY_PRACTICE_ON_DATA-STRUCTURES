///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int *ar;
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("The elements of the given array are : ");
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.ar[i]);
    }
    printf("\n");
}
int main()
{
    struct Array Arr;
    int s,n,i;
    printf("Enter the size of the array : ");
    scanf("%d",&s);
    Arr.ar=(int*)malloc(s*sizeof(int));
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the array's elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&Arr.ar[i]);
    }
    Arr.length=n;
    Display(Arr);
    free(Arr.ar);
    return 0;
}
