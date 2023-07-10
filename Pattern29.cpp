#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int start = 1;
    int i = 1;
    while (i<=n)
    {
        int space = n-i;
        while (space)
        {
            cout<<" ";
            space--;
        }

        int j = 1;
        while (j<=i)
        {
            cout<<start;
            j++;
            start++;
        }
        cout<<endl;
        i++;
        
    }
    
    return 0;
}

/*    1 for n = 4
     23
    456
   78910 
   */ 