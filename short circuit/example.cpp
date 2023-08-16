#include<iostream>
using namespace std;
int main()
{
    int a=4,b=5,i=7;
    if (a<b || ++i<=b)     // a<b ie true so compiler will check next condition
    {       
    cout<<i<<endl;
    }
}