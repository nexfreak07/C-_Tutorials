#include<iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;
    for(int i=1;i<=row; i++)
    {
        for(int j=1; j<=row-i; j++)
        cout<<" ";
        for(int j=1;j<=i;j++)
        {
            if(j==1)
            cout<<"*";
            cout<<" ";
         
        }
        for(int j=1;j<i;j++)
        {
            if(j==i-1)
            cout<<"*";
            cout<<" ";
         
        }
        cout<<endl;
    }
   for(int i=row;i>0; i--)
    {
        for(int j=1; j<=row-i; j++)
        cout<<" ";
        for(int j=1;j<=i;j++)
        {
            if(j==1)
            cout<<"*";
            cout<<" ";
         
        }
        for(int j=1;j<i;j++)
        {
            if(j==i-1)
            cout<<"*";
            cout<<" ";
         
        }
        cout<<endl;
    }
}
    

