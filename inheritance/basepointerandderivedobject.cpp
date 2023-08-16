#include<iostream>
using namespace std;
class base
{ public:
void fun1();
void fun2();
void fun3();

};
class derived:public base
{
public:
void fun4();
void fun5();
   
};


int main(){
    base *p;
    p=new derived();
    p->fun1();
    p->fun2();
    p->fun3();
    p->fun4();//error
    p->fun4();//error

    
}