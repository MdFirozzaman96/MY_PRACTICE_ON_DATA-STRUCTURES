///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

struct Rectangle
{
    int length,breadth;
};
void Initialize(struct Rectangle *r,int l,int b)
{
    r->length=l;
    r->breadth=b;
}
int Area(struct Rectangle r)
{
    return r.length*r.breadth;
}
void Change_Length(struct Rectangle *r,int b)
{
    r->breadth=b;
}
int main()
{
    int l,b,bb;
    struct Rectangle r;
    printf("Enter length & breadth of rectangle : ");
    scanf("%d%d",&l,&b);
    Initialize(&r,l,b);
    printf("The area of the rectangle is : %d\n",Area(r));

    printf("Change the breadth of the rectangle : ");
    scanf("%d",&bb);
    Change_Length(&r,bb);
    printf("Area after changing the value of breadth : %d\n",Area(r));
    return 0;
}
