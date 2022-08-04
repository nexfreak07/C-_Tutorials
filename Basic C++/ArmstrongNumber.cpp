#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int orig = n;
    int arm = 0;
    while(n>0)
    {
        arm = arm + pow((n%10),3);
        n = n/10;
    }
    if(orig==arm)
    { 
    cout<<"Armstrong Number"<<endl<<arm;
    }
    else{    
    cout<<"Non-Armstrong Number"<<endl<<arm;
    }
    return 0;
}
