#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int i=1;
    
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<"*";   //printing star pattern
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
