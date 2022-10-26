#include<iostream>
using namespace std;

class complex
{
    int a,b,sum;
    
    public:
    void getdata()
    {
        cout<<"Enter two complex Numbers:\n";
        cin>>a>>b;
    }
    friend complex operator+(complex c1,complex c2);
    
    void putdata()
    {
        cout<<a<<"+"<<b<<"i"<<"\n";
    }
};
complex operator+(complex c1,complex c2)
{
    complex c;
    c.a=c1.a+c2.a;
    c.b=c1.b+c2.b;
    return (c);
}
int main()
{
    complex c1,c2,sum;
    c1.getdata();
    c2.getdata();

    sum=c1+c2;
    cout<<"Entered Values: \n";
    cout<<"\t";
    c1.putdata();
    cout<<"\t";
    c2.putdata();
    
    cout<<"\nAddition of Real an Imaginary Number :\n";
    cout<<"\t";
    sum.putdata();
    
}
