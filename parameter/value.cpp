#include <iostream>
using namespace std;

void swap (int a, int b) {
 
    int temp;
    
    temp = a;
    a = b;
    b = temp;
    
    cout << a << b;
}

int main() {
 
   int first, second;
 
   cout <<"Enter two numbers \n";
   cin >> first >>second;
 
   swap(first,second);
 
   cout << " \n After swapping first number is " << first << " and second number is "<< second;
 
   return 0;
}