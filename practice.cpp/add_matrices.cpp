#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    int a[2][3]={{2,3,4},{5,6,7}};  //input
    int b[2][3]{{2,5,4},{5,3,7}};   //input2
    int c[2][3];                   //output
    for(i=0;i<2;i++)    
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];  //add two matrices
        }
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<" "<<c[i][j]; //display output ie c matrix
        }
    }
}