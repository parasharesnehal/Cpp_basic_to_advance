#include<iostream>
using namespace std;
int main()
{
string str;
int count=0;
cout<<"enter the string(one word) ";
cin>>str;                       //accepting string from user
for(int i=0;str[i]!= '\0';i++)
{
count++;                        //iterates throughout the string
}
cout<<"Length is "<<count<<endl;
return 0;
}
// same can be done using string iterator