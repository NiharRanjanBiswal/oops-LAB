/*WAP to count number of objects created from a class using concept of static data
members and static member function.*/

#include<iostream>
using namespace std;

class test1
{
    static int count;
    
    public:
    test1()
    {
        count++;
    }
    static void getdata()
    {
        cout<<"The Number of objects Created are: "<<count<<endl;
    }
};
int test1::count=0;   ///Static data members are initialized outside the class///
int main()
{
    test1 t1;
    test1 t2;
    t2.getdata();
    return 0;
}
