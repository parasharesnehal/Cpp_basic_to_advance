#include<iostream>
using namespace std;


int sum(int a, int b) {
    return a + b;
}

// function for summing 2 floats
float sum(float a, float b) {
    return a + b;
}

// function for summing 3 integers
int sum(int a, int b, int c) {
    return a + b + c;
}
void Main()
{
    cout<<sum(10,5);
    cout<<sum(12.9f,8.3f);
    cout<<sum(10,20,30);
}
