#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        // Print 1st Triangle
        int j = 1;
        while(j<=n-i+1)
        {
            cout<<j;
            j++;
        }
        
        // Print 2nd Triangle (contains *)
        while (j<=n+i-1)
        {
            cout<<"*";
            j++;
        }
        
        // Print 3rd Triangle
        int start = 1;
        while(start<=n-i+1)
        {   
            cout<<n-start-i+2;
            start++;
        }
        
        cout<<endl;
        i++;
    }
    
    return 0;
}

/* 1234554321   for n = 5 
   1234**4321   This Pattern is known as Dabangg Pattern.
   123****321
   12******21
   1********1 */
