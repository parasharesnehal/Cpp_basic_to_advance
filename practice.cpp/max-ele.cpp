#include<iostream>
using namespace std;
int main()
{
int max[4]={2,5,1,4};//array 
int i;
int maxi=max[0];
for (i=0;i<4;i++)
{
    if(max[i]>maxi)//checks succesive elements
    {
        maxi=max[i];//stores the maximum value in maxi
    }
}
cout<<"\nmaximum element is: "<<maxi<<endl;

}
//same for minimum element 