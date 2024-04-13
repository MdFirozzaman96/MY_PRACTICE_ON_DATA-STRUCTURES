///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>
#define size 100

void Merge(int arr[],int low,int mid,int high)
{
    int brr[size],i=low,j=mid+1,k=low;
    while(i<=mid&&j<=high)
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
    while(j<=high)
    {
        brr[k++]=arr[j++];
    }
    for(i=low;i<=high;i++)
    {
        arr[i]=brr[i];
    }
}

void Merge_Sort(int arr[],int low,int high)
{
    if(low<high)
    {
        int mid;
        mid=low+(high-low)/2;
        Merge_Sort(arr,low,mid);
        Merge_Sort(arr,mid+1,high);
        Merge(arr,low,mid,high);
    }
}

int main()
{
    int arr[size],n;
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    Merge_Sort(arr,0,n-1);
    printf("Elements in sorted order : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
