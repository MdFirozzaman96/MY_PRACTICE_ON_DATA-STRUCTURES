///***~~~ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>
#include<stdlib.h>

struct Heap
{
    int size;
    int *arr;
    int n;
};

typedef struct Heap heap;

int k=0;

void Create(heap *hp)
{
    hp->arr=(int*)malloc(hp->size*sizeof(int));
}

void Insert(heap *hp,int x)
{
    int i=hp->n;
    while(i>1&&x>hp->arr[i/2])
    {
        hp->arr[i]=hp->arr[i/2];
        i/=2;
    }
    hp->arr[i]=x;
    k=hp->n;
    hp->n+=1;
}


void Display_Heap(heap *hp)
{
    printf("Heap : ");
    for(int i=1;i<hp->n;i++)
    {
        printf("%d ",hp->arr[i]);
    }
    printf("\n");
}

int Delete(heap *hp)
{
    int i=1,j=2*i,x=hp->arr[1];

    hp->arr[1]=hp->arr[k];

    while(j<k-1)
    {
        if(hp->arr[j]<hp->arr[j+1])
        {
            j+=1;
        }
        if(hp->arr[i]<hp->arr[j])
        {
            int tmp=hp->arr[i];
            hp->arr[i]=hp->arr[j];
            hp->arr[j]=tmp;
            i=j;
            j=2*i;
        }
        else
        {
            break;
        }
    }
    return x;
}

int main()
{
    printf("Enter the maximum size of the heap : ");
    heap hp;
    scanf("%d",&hp.size);
    int op;
    do
    {
        printf("\n    MAIN MENU\n\n");
        printf("1 for creating an heap.\n");
        printf("2 for inserting an element into the heap.\n");
        printf("3 for deleting element from the heap.\n");
        printf("4 for displaying heap.\n");
        printf("0 for exit.\n");
        printf("\nEnter your option : ");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            printf("\n");
            hp.n=1;
            Create(&hp);
            break;

        case 2:
            printf("\n");
            int x;
            printf("Enter an integer number into the heap : ");
            scanf("%d",&x);
            Insert(&hp,x);
            break;

        case 3:
            printf("\n");
            int d;
            d=Delete(&hp);
            printf("%d is deleted from the heap.\n",d);
            hp.arr[k]=d;
            k-=1;
            break;

        case 4:
            printf("\n");
            Display_Heap(&hp);
            break;

        default:
            printf("Enter a valid option.\n");
        }

    }while(op!=0);

    return 0;
}
