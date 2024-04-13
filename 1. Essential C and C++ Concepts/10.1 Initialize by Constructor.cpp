///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>

using namespace std;

class Triangle
{
    private:
        int length,width;
    public:
        Triangle(int l,int w)
        {
            length=l;
            width=w;
        }
        int Area()
        {
            return length*width;
        }
        void Changing(int w)
        {
            width=w;
        }

};

int main()
{
    int ww;
    Triangle t(10,4);
    cout<<"The area of the triangle before changing width is : "<<t.Area()<<endl;
    cout<<"Change the width of the triangle : ";
    cin>>ww;
    t.Changing(ww);
    cout<<"The area of the triangle after changing width is : "<<t.Area()<<endl;
    return 0;
}

