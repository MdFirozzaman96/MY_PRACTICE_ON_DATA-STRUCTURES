///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
using namespace std;

class Arithmetic
{
    private:
        int a;
        int b;
    public:
        Arithmetic(int a,int b);
        int add();
        int sub();
};
Arithmetic::Arithmetic(int a,int b)
{
    this->a=a;
    this->b=b;
}
int Arithmetic::add()
{
    int c;
    c=a+b;
    return a+b;
}
int Arithmetic::sub()
{
    int c;
    c=a-b;
    return c;
}
int main()
{
    int a,b;
    cout<<"Enter the integer number of a & b : ";
    cin>>a>>b;
    Arithmetic obj(a,b);
    cout<<"Addition : "<<obj.add()<<endl;
    cout<<"Subtraction : "<<obj.sub()<<endl;
    return 0;

}
