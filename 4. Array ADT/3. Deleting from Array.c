///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

struct Array
{
    int *ar;
    int size;
    int length;
};

void Display(struct Array *arr)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        printf("%d ",arr->ar[i]);
    }
    printf("\n");
}
void Delete(struct Array *arr,int index)
{
    int i=index;
    while(i<arr->length)
    {
        arr->ar[i-1]=arr->ar[i];
        i+=1;
    }
    arr->length-=1;
}
int main()
{
    struct Array arr;
    int s,n,i;

    printf("Enter size of array : ");
    scanf("%d",&s);

    arr.size=s;

    arr.ar=(int *)malloc(s*sizeof(int));

    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);

    arr.length=n;

    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr.ar[i]);
    }

    printf("The elements of the array : ");
    Display(&arr);
    printf("Length of the array before deleting an element : %d\n",arr.length);

    printf("Enter index number of an element which you will delete : ");
    int index;
    scanf("%d",&index);
    Delete(&arr,index);
    printf("Array elements after deleting an element from the array : ");
    Display(&arr);
    printf("Length of the array after deleting an element : %d\n",arr.length);

    return 0;

}
