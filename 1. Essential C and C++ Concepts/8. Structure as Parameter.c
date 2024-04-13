///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

struct Rectangle
{
    int length,breadth;
};

int Pass_By_Value(struct Rectangle r)
{
    r.length++;
    return r.length*r.breadth;
}
/*int Pass_By_Reference(struct Rectangle &r)
{
    r.length++;
    return r.length*r.breadth;
}*/

int Pass_By_Address(struct Rectangle *r)
{
    r->length++;
    return r->length*r->breadth;
}
int main()
{
    struct Rectangle r;
    int l,b,Vl,Rf,Ad;
    printf("Enter the length and breadth : ");
    scanf("%d%d",&l,&b);
    r.length=l;
    r.breadth=b;

    printf("\nParameter passing by pass by value : \n\n");
    Vl=Pass_By_Value(r);
    printf("The area of rectangle by formal parameter is : %d\n",Vl);
    printf("The area of rectangle by actual parameter is : %d\n\n",r.length*r.breadth);

    /*printf("Parameter passing by pass by reference : \n");
    Rf=Pass_By_Reference(r);/// In case of c++;
    printf("The area of rectangle by formal parameter is : %d\n",Rf);
    printf("The area of rectangle by actual parameter is : %d\n\n",r.length*r.breadth);*/

    printf("Parameter passing by pass by address : \n\n");
    Ad=Pass_By_Address(&r);
    printf("The area of rectangle by formal parameter is : %d\n",Ad);
    printf("The area of rectangle by actual parameter is : %d\n",r.length*r.breadth);

    return 0;
}
