#include<iostream>
using namespace std;
class base
{public:
    void display()
    {
        cout<<"base class"<<endl;
    }
};
class child :public base
{ public:
    void display()
    {
        cout<<"derived class";
    }//same fun in diff class
};
int main()
{
    base b;
    b.display();
    child d;
    d.display();
}
