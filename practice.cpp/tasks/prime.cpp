#include<iostream>

using namespace std;

int main()
{
    int i,n;
    int count=0;
    cout<<"enter the number ";
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }
    
    if(count==2)
        cout<<"prime";
    else
        cout<<"not prime";
}