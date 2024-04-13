///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle()
        {
            length=breadth=1;
        }
        Rectangle(int length,int breadth);
        int Area();
        int Perimeter();
        void setlength(int l)
        {
            length=l;
        }
        int getlength()
        {
            return length;
        }
        ~Rectangle();
};
Rectangle::Rectangle(int l,int b)
{
    length=l;
    breadth=b;
}
int Rectangle::Area()
{
    return length*breadth;
}
int Rectangle::Perimeter()
{
    return 2*(length+breadth);
}
Rectangle::~Rectangle(){}

int main()
{
    int L,B;
    cout<<"Enter the length and breadth : ";
    cin>>L>>B;
    Rectangle obj(L,B);
    cout<<"The area of the rectangle is : "<<obj.Area()<<endl;
    cout<<"The perimeter of the rectangle is : "<<obj.Perimeter()<<endl;

    cout<<"Enter a new length : ";
    int l;
    cin>>l;
    obj.setlength(l);
    cout<<"The new length is : "<<obj.getlength()<<endl;
    cout<<"The area of the rectangle after changing the length is : "<<obj.Area()<<endl;
    cout<<"The perimeter of the rectangle is after changing the length is : "<<obj.Perimeter()<<endl;
    cout<<endl;
}
