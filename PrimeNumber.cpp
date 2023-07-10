#include<iostream>
using namespace std;

int main(){
    int n,i,c;
    cout<<"Enter n"<<endl;
    cin>>n;
    for (i =1; i<=n; i++)
    {
        if (n%i==0)
        {
            c++;
            
        }
        if (c==2)
        {
            cout<<n<<"is a Prime Number"<<endl;
        }
        else{
            cout<<n<<"is not a Prime Number"<<endl;
        }
    }
    
    return 0;
}