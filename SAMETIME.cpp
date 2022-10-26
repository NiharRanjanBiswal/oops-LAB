#include<iostream>
using namespace std;

class Time
{
    public:
    
    int hr;
    int min;
    int sec;
    
    public:
    friend istream &operator>>(istream &scan,Time &t)
    {
       scan>>t.hr>>t.min>>t.sec;
       return scan;
    }
    friend ostream &operator<<(ostream &print,Time &t)
    {
        print<<t.hr<<";"<<t.min<<";"<<t.sec;
        return print;
    }
    void operator==(Time z)
    {
        if(hr==z.hr&&min==z.min&&sec==z.sec)
        {
            cout<<"\nBoth are having same time";
        }
        else
        {
            cout<<"\nBoth the time are not same ";
        }
    }
};

int main()
{
    Time t1;
    Time t2;
    cout<<"\nEnter the 1ST time:(in HOUR MINUTE SECOND  \n";
    cin>>t1;
    cout<<"\nTIME: ";
    cout<<t1;
    cout<<"\nEnter the Time 2nd: HOUR MINUTE SECOND \n";
    cin>>t2;
    cout<<"\nTIME: ";
    cout<<t2;
    t1==t2;
    return 0;
}
