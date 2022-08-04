#include<iostream>
using namespace std;
int main()
{
    int n,counter=1;

    cin>>n;
    for(int i=n; i>=0; i--)
    {
        for(int j=1;j<=i; j++)
        cout<<" ";
        for(int j=1;j<=n-i; j++)
        cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}