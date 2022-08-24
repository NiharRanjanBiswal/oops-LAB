#include<iostream>
using namespace std;

class area
{
    int length,breadth;
    
    public:
    void dsetDim();
    int getArea();
};

void area::dsetDim()
{
    cout<<"Enter the length and Breadth : ";
    cin>>length>>breadth;
}
int area::getArea()
{
    return (length*breadth);
}

int main()
{
    area a1;
    a1.dsetDim();
    a1.getArea();
    
    return 0;
}
