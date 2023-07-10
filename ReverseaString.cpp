// Reverse a String(single Word) in C++


#include<iostream>
using namespace std;

int main()
{
    string str;
    string revstr = "";
    cout<<"Enter a String"<<endl;
    cin>>str;
    int order = str.length();
    for (int i = order-1; i >=0; i--)
    {
        revstr = revstr + str.at(i);
    }
    cout<<"The reverse string is: "<<revstr<<endl;
    
    return 0;
}