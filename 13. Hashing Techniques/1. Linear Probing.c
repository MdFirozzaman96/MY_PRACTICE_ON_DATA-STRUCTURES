///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>
#include<stdlib.h>

struct Hash
{
    int size;
    int *hs;
    int n;
};

typedef struct Hash hash;

void Create_Hash_Table(hash *HS)
{
    HS->hs=(int*)malloc(HS->size*sizeof(int));
    for(int i=0;i<HS->size;i++)
    {
        HS->hs[i]=0;
    }
}
int Probing(hash *HS,int key)
{
    int i=0;
    while(HS->hs[((key%HS->size)+i)%HS->size]!=0)
    {
        i+=1;
    }
    return ((key%HS->size)+i)%HS->size;
}
void Insert(hash *HS,int key)
{
    int index;
    index=Probing(HS,key);
    HS->hs[index]=key;
}

void Display(hash *HS)
{
    printf("     Hash Table\n");
    for(int i=0;i<HS->size;i++)
    {
        printf("    %d\n",HS->hs[i]);
    }
}
int main()
{
    hash HS;
    printf("Enter the maximum size of hash table : ");
    scanf("%d",&HS.size);
    Create_Hash_Table(&HS);
    printf("Enter the number of elements of the hash table : ");
    scanf("%d",&HS.n);
    printf("Insert elements into the hash table one by one : ");
    int key;
    for(int i=0;i<HS.n;i++)
    {
        scanf("%d",&key);
        Insert(&HS,key);
    }
    Display(&HS);
    return 0;
}
