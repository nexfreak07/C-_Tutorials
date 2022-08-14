#include<iostream>
using namespace std;
void fib(int n)
{
    int t1 = 0, t2= 1;
    int next = 0;
    for(int i=1; i<=n; i++)
    {
        cout<<t1<<endl;
        next = t1+t2;
        t1 = t2;
        t2 = next;
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    fib(n);
    cout<<endl;
    return 0;
}
