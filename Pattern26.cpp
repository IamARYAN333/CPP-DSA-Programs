#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    while(i<=n)
    {
        // Print 1st Triangle (that contains Spaces)
        int space = n-i;
        while(space)
        {
            cout<<" ";
            space--;
        }

        // Print 2nd Triangle
        int j = 1;
        while (j<=i)
        {
            cout<<j;
            j++;
        } 
        
       // Print 3rd Triangle
        int start = i-1;
        while (start)
        {
            cout<<start;
            start = start - 1;
        }
            cout<<endl;
            i++;
        
        
        
    }
    return 0;
}

/*  1   for n = 4
   121
  12321
 1234321  This pattern has 3 triangles */ 