#include <iostream>
using namespace std;
int main()
{
 int n, i;
 float num[100], sum=0.0, average; //varaiable and array declaration

 cout << "Enter the numbers of elements: ";
 cin >> n;

 for(i = 0; i < n; ++i)        //taking input of n elements
 {
 cout << i + 1 << ". Enter number: ";
 cin >> num[i];
 sum += num[i];
 }

 average = sum / n;
 cout << "Average = " << average;

 return 0;
} 