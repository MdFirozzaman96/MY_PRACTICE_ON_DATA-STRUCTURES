///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>
#define Max 100

void Merge(int arr[],int low,int mid,int high)
{
    //printf("low : %d, high : %d, mid : %d\n",low,high,mid);
    int brr[Max],i=low,j=mid+1,k=low;
    while(i<=mid&&j<=high)
    {
        if(arr[i]<arr[j])
        {
            brr[k++]=arr[i++]; // 4 3 2 1
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
    //printf("Merge : ");
    for(i=low;i<=high;i++)
    {
        arr[i]=brr[i];
        //printf("%d ",arr[i]);
    }
    //printf("\n");
}

void Iterative_Merge_Sort(int arr[],int n)
{
    for(int i=2;i<=n;i=i*2)
    {
        for(int j=0;(j+i-1)<n;j=j+i)
        {
            int l,mid,h;
            l=j;
            h=j+i-1;
            mid=l+(h-l)/2;
            Merge(arr,l,mid,h);
        }
    }
}
int main()
{
    int arr[Max],n;
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);
    printf("Enter elements of the array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    Iterative_Merge_Sort(arr,n);
    printf("The elements after performing Iterative Merge Sort : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
