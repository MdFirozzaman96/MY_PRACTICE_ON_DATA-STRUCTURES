///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
using namespace std;

template<class T>

class Arithmetic
{
    private:
        T a;
        T b;
    public:
        Arithmetic(T a,T b);
        T add();
        T sub();
};
template<class T>
Arithmetic<T>::Arithmetic(T a,T b)
{
    this->a=a;
    this->b=b;
}
template<class T>
T Arithmetic<T>::add()
{
    T c;
    c=a+b;
    return c;
}
template<class T>
T Arithmetic<T>::sub()
{
    T c;
    c=a-b;
    return c;
}
int main()
{
    int a,b;
    cout<<"Enter the integer number of a & b : ";
    cin>>a>>b;
    Arithmetic<int> obj(a,b);
    cout<<"Addition : "<<obj.add()<<endl;
    cout<<"Subtraction : "<<obj.sub()<<endl;
    return 0;

}

