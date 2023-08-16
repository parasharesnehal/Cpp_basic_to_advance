#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i=0;i<5;i++)//for rows 
    {
        for(j=0;j<5;j++)//for columns
        {
        if (i>=j)
          cout<<"*";
        }
        cout<<endl;
    }
}
