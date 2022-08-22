/*Create a class which stores a sting and its length as data members. Include all the
constructors. Include a member function to join two strings and display the
concatenated string.*/

#include<iostream>
using namespace std;

class string1
{
        private:
        string str;
        int length;
        
        public:
        string1(string s)   //parameterized cconstructor
        {
            str=s;
        }
        void concatenatedstring(string s2)
        {
            string s3= str+s2;
            cout<<"Concatenated string = "<<s3<<endl;
        }
};
int main()
{
    string1 s("Nihar");
    s.concatenatedstring("Ranjan Biswal");
    
    return 0;
}
