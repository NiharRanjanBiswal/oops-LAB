#include<iostream>
using namespace std;

class student
{
    string name;
    int rollno;
    
    public:
    void getdata();
    void putdata();
};

void student::getdata()
{
    cout<<"Enter the student name: ";
    cin>>name;
    cout<<"Enter student roll no: ";
    cin>>rollno;
}

void student::putdata()
{
    cout<<"Student Name is: "<<name<<endl;
    cout<<"Student Roll No: "<<rollno<<endl;
}

int main()
{
    student s1;
    s1.getdata();
    s1.putdata();
    
    return 0;
}
