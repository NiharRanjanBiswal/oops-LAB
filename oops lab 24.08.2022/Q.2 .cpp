#include<iostream>
using namespace std;

class triangle
{
    public:
    int a,b,c,area,perimeter;
    float base,height;

    public:
    void getdata();
    void putdata();
    void calc();
};
void triangle::getdata()
{
    cout<<"Enter the 3 sides of triangle";
    cin>>a>>b>>c;
    cout<<"Enter the value of height,base";
    cin>>height>>base;
}
void triangle::calc()
{
   area=(0.5*(base*height));
   perimeter=(a+b+c);
}
void triangle::putdata()
{
    cout<<"Area of the triangle is: "<<area<<endl;
    cout<<"Perimeter of the triangle: "<<perimeter<<endl;
}

int main()
{
    triangle t1;
    t1.getdata();
    t1.calc();
    t1.putdata();
    
    return 0;
}
