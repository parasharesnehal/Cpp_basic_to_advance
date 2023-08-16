#include<iostream>

using namespace std;

class Complex
{
    public :
    int real;
    int imaginary;

    Complex()
    {
       
    }

    Complex(int real, int imaginary)                // Parameterized Constructor.
    {
        this->real = real;
        this->imaginary = imaginary;

    }


   Complex  operator+(Complex obj2)
    {
        
        Complex result;

        result.real = this->real + obj2.real;
        result.imaginary = this->imaginary + obj2.imaginary;

        return result;
    }


    void getData()
    {
        cout << this->real << " + " << this->imaginary << "i" << endl;
    }

};


int main()
{
    Complex obj1(1,2);
    Complex obj2(3,4);
    Complex result = obj1 + obj2;

    result.getData();
}