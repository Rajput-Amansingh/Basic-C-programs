#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    short int sum=0;
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"sum is: "<<sum<<endl;
    return 0;
}