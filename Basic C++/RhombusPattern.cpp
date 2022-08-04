#include<iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;
    for(int i=row; i>0 ;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=row-i; j++)
        cout<<" * ";
        for(int j=i;j>0; j--)
        cout<<" * ";
        cout<<endl;
    }
    return 0;
}