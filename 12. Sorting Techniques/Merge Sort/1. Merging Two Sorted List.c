///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>
#define Max 100

void Merge(int arr[],int low,int heigh)
{
    int mid=heigh/2,i=low,j=mid+1,k=0;
    int brr[heigh];
    while(i<=mid&&j<heigh)
    {
        if(arr[i]<arr[j])
        {
            brr[k++]=arr[i++];
        }
        else
        {
            brr[k++]=arr[j++];
        }
    }
    while(i<=mid)
    {
        brr[k++]=arr[i++];
    }
    while(j<heigh)
    {
        brr[k++]=arr[j++];
    }
    for(int i=low;i<heigh;i++)
    {
        arr[i]=brr[i];
    }
}

int main()
{
    int arr[Max],n;
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    Merge(arr,0,n);
    printf("Sorted Array : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
