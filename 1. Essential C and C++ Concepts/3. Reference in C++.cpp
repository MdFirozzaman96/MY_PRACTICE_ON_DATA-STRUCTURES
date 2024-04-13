///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>

using namespace std;

int main()
{
    /*int a=100;
    int &r=a;
    cout<<endl<<"Definition : Reference is a nickname or alias given to a variable."<<endl<<endl;
    cout<<"r : "<<r<<endl;
    r+=2;
    cout<<"Address of a & r are same."<<endl;
    cout<<"r : "<<r<<",  a : "<<a<<endl;*/
    int a=20;
    int *p=&a;
    printf("p=%d, &a=%d, *p=%d, &p=%d\n",p,&a,*p,&p);
    return 0;
}

