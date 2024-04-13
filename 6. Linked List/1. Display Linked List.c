///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node ND;

struct Node *first=NULL;

void Create(int arr[],int n)
{
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=arr[0];
    first->next=NULL;
    struct Node *last;
    last=first;
    int i;
    struct Node *tmp;
    for(i=1;i<n;i++)
    {
        tmp=(struct Node*)malloc(sizeof(struct Node));
        tmp->data=arr[i];
        tmp->next=NULL;
        last->next=tmp;
        last=tmp;
    }
}

void Display()
{
    struct Node *node;
    node=first;
    while(node!=NULL)
    {
        ///printf("Data : %d  Next Address : %d\n",node->data,node->next);
        printf("%d ",node->data);
        node=node->next;
    }
    printf("\n");
}
void Recursive_Display(struct Node *node)
{
    if(node==NULL)
    {
        return;
    }
    else
    {
        Recursive_Display(node->next);
        printf("%d ",node->data);
    }
}

int Count(struct Node *node)
{
    int c=0;
    while(node!=NULL)
    {
        c+=1;
        node=node->next;
    }
    return c;
}

int Recursive_Count(struct Node *node)
{
    if(node==NULL)
    {
        return 0;
    }
    else
    {
        return Recursive_Count(node->next)+1;
    }
}
int Recursive_Count1(struct Node *node)
{
    static int c=0;
    if(node==NULL)
    {
        return c;
    }
    else
    {
        c+=1;
        return Recursive_Count1(node->next);
    }
}
int Recursive_Count2(struct Node *node)
{
    int c=0;
    if(node==NULL)
    {
        return c;
    }
    else
    {
        return Recursive_Count2(node->next)+1;
    }
}
int Recursive_Count3(struct Node *node)
{
    int c=0;
    if(node==NULL)
    {
        return c;
    }
    else
    {
        return 1+Recursive_Count3(node->next);
    }
}

int Sum(struct Node *node)
{
    int sum=0;
    while(node!=NULL)
    {
        sum+=node->data;
        node=node->next;
    }
    return sum;
}

int Recursive_Sum(struct Node *node)
{
    if(node==NULL)
    {
        return 0;
    }
    return Recursive_Sum(node->next)+node->data;
}

int Max(struct Node *node)
{
    int max;
    max=node->data;
    node=node->next;
    while(node)
    {
        if(node->data>max)
        {
            max=node->data;
        }
        node=node->next;
    }
    return max;
}
int Recursive_Max(struct Node *node)
{
    if(node->next==NULL)
    {
        return node->data;
    }
    else
    {
        int max=Recursive_Max(node->next);
        if(node->data>max)
        {
            return node->data;
        }
        else
        {
            return max;
        }
    }
}
int Min(struct Node *node)
{
    int min=node->data;
    node=node->next;
    while(node)
    {
        if(node->data<min)
        {
            min=node->data;
        }
        node=node->next;
    }
    return min;
}
int Recursive_Min(struct Node *node)
{
    if(node->next==NULL)
    {
        return node->data;
    }
    else
    {
        int min=Recursive_Min(node->next);
        return min<node->data? min:node->data;
    }
}

int Search(struct Node *node,int key)
{
    while(node)
    {
        if(node->data==key)
        {
            return 1;
        }
        node=node->next;
    }
    return 0;
}
struct Node* Recursive_Search(struct Node *node,int key)
{
    if(node==NULL)
    {
        return NULL;
    }
    else if(node->data==key)
    {
        return node;
    }
    else
    {
        return Recursive_Search(node->next,key);
    }
}

ND* Improve_LSearch(struct Node *p,int key)
{
    printf("AAAAAAA\n");
    struct Node *q,*f;
    q=NULL;
    f=p;
    while(p)
    {
        if(p->data==key)
        {
            /// 2 3 55 7 11
            /// 7 2 3 55 11
            q->next=p->next;
            p->next=f;
            f=p;
            printf("\n\nlkdkdkd\n\n");
        }
        q=p;
        p=p->next;
        printf("Md.Firozzaman\n");
    }
}
int main()
{
    int arr[5]={2,3,55,7,11};
    Create(arr,5);
    printf("The elements of the linked list : \n");
    Display();
    printf("The elements of the linked list in reverse order : ");
    Recursive_Display(first);
    printf("\n");
    printf("The total number of nodes are : %d\n\n",Count(first));
    printf("The total number of nodes(Recursive Count) are : %d\n",Recursive_Count(first));
    printf("The total number of nodes(Recursive Count1) are : %d\n",Recursive_Count1(first));
    printf("The total number of nodes(Recursive Count2) are : %d\n",Recursive_Count2(first));
    printf("The total number of nodes(Recursive Count3) are : %d\n\n",Recursive_Count3(first));
    printf("The sum of all elements of the linked list is : %d\n",Sum(first));
    printf("The RecursiveSum of all elements of the linked list is : %d\n\n",Recursive_Sum(first));
    printf("The maximum value of the link list is : %d\n",Max(first));
    printf("The maximum value(recursive) of the link list is : %d\n\n",Recursive_Max(first));
    printf("The minimum value of the link list is : %d\n",Min(first));
    printf("The minimum value(recursive) of the link list is : %d\n",Min(first));

    int key;
    printf("\nEnter an element to search : ");
    scanf("%d",&key);
    Search(first,key)==1? printf("%d is found into the linked list.\n",key):printf("%d is not found into the linked list.\n",key);
    Recursive_Search(first,key)==NULL? printf("Recursive : %d is not found into the linked list.\n",key):printf("Recursive : %d is found in the linked list.\n",key);

    printf("The linked list before improving linear search : ");
    Display();
    printf("The linked list after improving linear search : ");
    Improve_LSearch(first,key);
    Display();

    return 0;
}
