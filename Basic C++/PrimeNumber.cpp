#include<iostream>
using  namespace std;
int main()
{
    int n;
   cin>>n;
    for(int i=2;i<n;i++)
    {
        int j;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
      cout<<i<<endl;
    }
    return 0;
}