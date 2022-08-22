//WAP to demonstrate the order of call of constructors and destructors for a class.//

#include<iostream>
using namespace std;

class parent
{
    public:
    parent()
    {
        cout<<"Inside Base class" <<endl;
    }
};
class child : public parent
{
    public:
    child()
    {
        cout<<"Inside derived class"<<endl;
    }
};
int main()
{
    child c;
    return 0;
    
}
