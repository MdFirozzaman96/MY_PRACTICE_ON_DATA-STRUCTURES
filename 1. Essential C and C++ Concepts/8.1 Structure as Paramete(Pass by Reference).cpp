///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#include<stdlib.h>

using namespace std;

struct Rectangle
{
    int length,breadth;
};

int Pass_By_Reference(struct Rectangle &r)
{
    r.length+=2;
    return r.length*r.breadth;
}
int main()
{
    struct Rectangle r;
    int l,b,Rf;

    cout<<"Enter length & breadth of rectangle : ";
    cin>>l>>b;

    r.length=l;
    r.breadth=b;

    cout<<endl<<"Call by reference : "<<endl<<endl;
    Rf=Pass_By_Reference(r);

    printf("The area of rectangle by formal parameter is : %d\n",Rf);
    printf("The area of rectangle by actual parameter is : %d\n\n",r.length*r.breadth);
    return 0;
}
