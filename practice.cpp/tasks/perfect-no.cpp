//sum of the factors of number is double the number
#include<iostream>

using namespace std;

int main()
{
    int i,n;
    int sum=0;
    cout<<"enter the no";
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==2*n)
        cout<<"perfect";
    else
        cout<<"not perfect";
}