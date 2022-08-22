/*Create a class which stores time in hh:mm format. Include all the constructors. The
parameterized constructor should initialize the minute value to zero, if it is not
provided.*/

#include<iostream>
using namespace std;

class Time
{
    int hour;
    int minute;
    
    public:
    void getdata();
    void putdata();
    Time(){}
    Time(int hh,int mm=0)
    {
        hour=hh;
        minute=mm;
    }
    ~Time();
    
};
void Time::getdata()
{
    cout<<"Enter the value of hour: ";
    cin>>hour;
    cout<<"Enter the value of minute: ";
    cin>>minute;
}
void Time::putdata()
{
    cout<<hour<<":"<<minute<<endl;
}
Time::~Time()
{
    cout<<"The Destructor is called \n";
}
int main()
{
   Time t1(2,33);
   Time t2;
   t1.putdata();
   t2.getdata();
   t2.putdata();
   
   return 0;
};
