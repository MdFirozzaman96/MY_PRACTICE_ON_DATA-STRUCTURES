///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

struct Rectangle
{
    int arr[5],n;
};
void Print_Elements(struct Rectangle r)
{
    int i;
    for(int i=0;i<r.n;i++)
    {
        printf("%d ",r.arr[i]);
    }
    printf("\n");
}
int main()
{
    struct Rectangle r;
    r.arr[0]=130;
    r.arr[1]=131;
    r.arr[2]=133;
    r.arr[3]=134;
    r.arr[4]=135;
    r.n=5;
    printf("Array's Elements : ");
    Print_Elements(r);
    return 0;

}
