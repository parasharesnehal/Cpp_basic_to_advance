#include<iostream>
using namespace std;
int main()
{
    int x,y ;
    cout<<"enter any two numbers";
    cin>>x>>y;
    if(x>y)
    {
        cout<<"the  greater no is "<<x;
    
    }
    else if(x==y)
    {
        cout << "Both Numbers are equal" << endl;
    }
    else
    {
        cout << "The smaller number is " << y;
    }
}
