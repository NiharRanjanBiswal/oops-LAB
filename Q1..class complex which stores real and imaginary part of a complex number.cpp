/*Create a class complex which stores real and imaginary part of a complex number.
Include all types of constructors and destructor. The destructor should display a
message about the destructor being invoked. Create objects using different
constructors and display them.*/
 
#include<iostream>
using namespace std;

class complex 
{
     int real;
     int imaginary;
     
     public:
     complex(){}
     complex (int r,int i)
     {
         real=r;
         imaginary=i;
     }
     void getdata();
     void putdata();
     ~complex();
};
void complex::getdata()
{
    cout<<"Enter the value of real part: ";
    cin>>real;
    cout<<"Enter the value of imaginary part: ";
    cin>> imaginary;
}
void complex::putdata()
{
    cout<<real<<"+"<<imaginary<<"i"<<endl;
}
complex::~complex()
{
    cout<<"The Destructor is Called \n";
}

int main()
{
    complex c1(2,3);
    complex c2,c3;
    c1.putdata();
    c3.getdata();
    c3.putdata();
    c2.getdata();
    c2.putdata();
    
    return 0;
}
