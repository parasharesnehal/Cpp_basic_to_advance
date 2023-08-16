#include <iostream>
using namespace std;
int main() 
{

string str="WeLcOmE7";    //symbol included

for(int i=0; str[i]!= '\0';i++) 
{
if(str[i]>=97 && str[i]<=122)   //checks if letter is lower 
{

str[i]-=32;                     //change of case

}
}
cout<<str<<endl;
}
// upper to lower
// #include<iostream>

//  using namespace std;

//  int main()
// {

// string str="WELCOME";

// for (int i=0; str[i]!= '\0'; i++) 
// {
//     str[i]=str[i]+32;

// }

// cout<<str<<endl;

// return 0;

//  }