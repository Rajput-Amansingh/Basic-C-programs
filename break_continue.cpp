#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    
    for(i=2;i<n;i++)
    {
        
        if(n%i==0){
        cout<<"not a prime number"<<endl;
        break;
        }
        else if(i=n-1){
            cout<<"prime number"<<endl;
            cout<<i<<endl;
        }
       
        
        

    }
    return 0;
}