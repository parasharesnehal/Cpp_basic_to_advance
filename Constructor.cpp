#include<iostream>
#include<stdio.h>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle()//default constructor
    {
        length=0;
        breadth=0;
    }
    rectangle(int l,int b)//parameterized constructor
    {
       int setLength(l);
        int setBreadth(b);
    }
    rectangle(rectangle &rect)//copy constructor 
    {
        length=rect.length;
        breadth=rect.breadth;
    }

};
//here function overloading occurs also called as constructor overloading
