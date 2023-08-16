//program to print the sum of n natural numbers

#include<iostream>
using namespace std;
int main()
{
 int i,n,sum=0;
 cout<<"enter the no. ";  //enter the no till which you want the sum
 cin>>n;
 for (i=0;i<=n;i++)
 {
    sum=sum+i;           //sum is added 
 }
 cout<<sum;
 

}
