#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number till which you need sum"<<endl;
    cin>>n;
    int sum =0;
    for(int i=0;i<=n; i++){
        sum += i;
    }

    cout<<"Sum is : \n"<<sum;
    return 0;
}