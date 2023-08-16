#include<iostream>
using namespace std;
int pow(int m,int n)
{
    int i;
    int p=1;
    for(i=0;i<n;i++)
    {
      p=p*m; 
    }
    return p;
}

void Main()
{
    cout<<pow(2,5);
}

