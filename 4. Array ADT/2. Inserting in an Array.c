///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int *ar;
    int length;
    int size;
};

void Display(struct Array *arr)
{
    int i;
    printf("Array's Elements : ");
    for(i=0;i<arr->length;i++)
    {
        printf("%d ",arr->ar[i]);
    }
    printf("\n");
    //arr->length+=1;
}

void Append(struct Array *arr,int x)
{
    arr->ar[arr->length]=x;
    arr->length+=1;
}
void Insert(struct Array *arr,int x,int index)
{
    int i=arr->length;
    while(i>=index)
    {
        arr->ar[i]=arr->ar[i-1];
        i-=1;
    }
    arr->ar[i]=x;
    arr->length+=1;
}

void Update(struct Array *arr,int x,int loc)
{
    arr->ar[loc-1]=x;
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

void Bubble_Sort(struct Array *arr)
{
    int i,j,tmp;
    for(i=0;i<arr->length;i++)
    {
        for(j=0;j<arr->length-(i+1);j++)
        {
            if(arr->ar[j]>arr->ar[j+1])
            {
                tmp=arr->ar[j];
                arr->ar[j]=arr->ar[j+1];
                arr->ar[j+1]=tmp;
            }
        }
    }
}

int Bin_Iterative(struct Array *arr,int x)
{
    int l,h,mid;
    l=0;
    h=arr->length-1;
    while(l<=h)
    {
        mid=l+(h-l)/2;
        if(arr->ar[mid]==x)
        {
            return mid;
        }
        else if(arr->ar[mid]<x)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    return -1;
}

int Bin_Recursive(struct Array *arr,int l,int h,int x)
{
    int mid;
    mid=l+(h-l)/2;
    if(arr->ar[mid]==x)
    {
        return mid+1;
    }
    else if(arr->ar[mid]<x)
    {
        Bin_Recursive(arr,mid+1,h,x);
    }
    else
    {
        Bin_Recursive(arr,l,mid-1,x);
    }
    return -1;
}

void Rearrange(struct Array *arr)
{
    int i,j;
    i=0;
    j=arr->length-1;

    while(i<j)
    {
        while(arr->ar[i]<0)
        {
            i+=1;
        }
        while(arr->ar[j]>0)
        {
            j-=1;
        }
        int tmp;
        tmp=arr->ar[i];
        arr->ar[i]=arr->ar[j];
        arr->ar[j]=tmp;
        i+=1;
        j-=1;
    }
}
int main()
{

    struct Array arr;
    int option,s,n,i,index,x,j;
    do
    {
        printf("\n ***~~~OPTIONS~~~***\n");
        printf("1 for create array.\n");
        printf("2 for display array.\n");
        printf("3 for append element.\n");
        printf("4 for insert element.\n");
        printf("5 for update element.\n");
        printf("6 for delete element.\n");
        printf("7 for length of array.\n");
        printf("8 for bubble sort.\n");
        printf("9 for binary search.\n");
        printf("10 for memory deallocation(free array).\n");
        printf("11 for arranging negative and positive numbers on the left and right side.\n\n");

        printf("Enter your option : ");
        scanf("%d",&option);

        switch(option)
        {
        case 1:
                printf("\n");
                printf("Enter the size of array : ");
                scanf("%d",&s);
                arr.ar=(int *)malloc(s*sizeof(int));
                printf("Enter the length of the array : ");
                scanf("%d",&n);
                arr.length=n;
                printf("Enter array elements : ");
                for(i=0;i<arr.length;i++)
                {
                    scanf("%d",&arr.ar[i]);
                }
                printf("\n");
                ///free(arr.ar);///Check it.
                break;

        case 2:
                printf("\n");
                Display(&arr);
                printf("\n");
                break;

        case 3:
                printf("\n");
                printf("Enter an integer number to append to the array : ");
                scanf("%d",&x);
                Append(&arr,x);
                printf("\n");
                break;

        case 4:
                printf("\n");
                printf("Enter an element with index where its inserted : ");
                scanf("%d%d",&x,&index);
                Insert(&arr,x,index);
                printf("After insert element %d, the elements of the array are : ");
                Display(&arr);
                printf("\n");
                break;

        case 5:
                printf("\n");
                printf("Enter an element with index number to update : ");
                scanf("%d%d",&x,&index);
                Update(&arr,x,index);
                printf("\n");
                break;

        case 6:
                printf("\n");
                printf("Enter index number which element you want to delete :  ");
                scanf("%d",&index);
                Delete(&arr,index);
                printf("\n");
                break;

        case 7:
                printf("\n");
                printf("The length of array is = %d\n",arr.length);
                printf("\n");
                break;

        case 8:
                Bubble_Sort(&arr);
                break;
        case 9:
                printf("\n");
                int op,loc;
                printf("Enter an integer number to search : ");
                scanf("%d",&x);
                do
                {
                    printf("    1 for iterative binary search.\n");
                    printf("    2 for recursive binary search.\n");
                    printf("    Enter an option : ");
                    scanf("%d",&op);
                    switch(op)
                    {
                    case 1:
                            loc=Bin_Iterative(&arr,x);
                            if(loc>-1)
                            {
                                printf("    %d is located at %d location.\n\n",x,loc+1);
                            }
                            else
                            {
                                printf("    %d does not exist in the array.\n\n",x);
                            }
                            break;
                    case 2:
                            printf("\n");
                            loc=Bin_Recursive(&arr,0,arr.length-1,x);
                            if(loc>-1)
                            {
                                printf("    %d is located at %d location.\n\n",x,loc+1);
                            }
                            else
                            {
                                printf("    %d does not exist in the array.\n\n",x);
                            }
                            break;

                    default:
                            printf("    Enter an option.\n");
                            break;

                    }
                }while(op!=3);
                printf("\n");
                break;

        case 10:
                free(arr.ar);
                break;

        case 11:
                printf("\n");
                Rearrange(&arr);
                break;

        default:
                printf("\nChoose a valid option.\n\n");
                break;

        }

    }while(option!=12);

    free(arr.ar);
    return 0;

}

/* Md.Firozzaman
   180201130
   CSE
   8th
*/
