#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        cout<<"A is max\n";
        else
        cout<<"C is max\n";
    }
    else {
        if(b>c)
        cout<<"B is max\n";
        else
        cout<<"C is max\n";
    }
}