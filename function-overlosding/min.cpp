#include<iostream>
using namespace std;


int Min(int a ,int b){
    if (a>b)
    {
        return b;
    }
    else
    return a;
}

int Min(int a ,int b,int c){
    if (a>b)
    {
        return b;
    }
    if(b>c)
    {
        return c;
    }
    else{
    return a;
    }
}
float Min(float a ,float b)
{
    if (a>b)
    {
        return b;
    }
    else{
    return a;
    }
}

void Main()
{
    cout<<Min(10,5);
    cout<<Min(12,7,9);
    cout<<Min(18.0f,9.0f);
}
