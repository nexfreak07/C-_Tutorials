#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkTriplet(int a,int b, int c)
{
    int m = max(a,max(b,c));
    m = pow(m,2);
    int ans = pow(a,2) + pow(b,2) + pow(c,2) - m;
    if(m==ans)
    return true;
    else
    return false;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(checkTriplet(a,b,c))
    {
        cout<<"Yes, It is pythagoreous triplet";
    }
    else{
        cout<<"No, they are not pythagoreous triplet";
    }
    return 0;
}
