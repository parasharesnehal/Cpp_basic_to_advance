#include<iostream>
using namespace std;
int main()
{
    int dayno;
    cout<<"enter a no. ";
    cin>>dayno;
    switch (dayno)
    {
    case 1:cout<<"monday";
        break;
    case 2:cout<<"tuesday";
        break;
    case 3:cout<<"wednesday";
        break;
    default:cout<<"invalid";
        break;
    }
}