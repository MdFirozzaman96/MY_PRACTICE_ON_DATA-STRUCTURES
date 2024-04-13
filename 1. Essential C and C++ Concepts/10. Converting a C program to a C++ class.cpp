///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>

using namespace std;

class Triangle
{
    private:
        int length,width;
    public:
        void Initialize(int l,int w)
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
    Triangle t;
    int l,w,ww;
    cout<<"Enter the length & width of the triangle : ";
    cin>>l>>w;
    t.Initialize(l,w);
    cout<<"The area of the triangle before changing width is : "<<t.Area()<<endl;
    cout<<"Change the width of the triangle : ";
    cin>>ww;
    t.Changing(ww);
    cout<<"The area of the triangle after changing width is : "<<t.Area()<<endl;
    return 0;
}
