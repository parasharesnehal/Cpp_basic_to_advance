#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
main()
{
    int array_elements[5]={4,5,3,8,1};
    int sum2=0;
    int i;
    for(i=0;i < 5;i++) //iterrates till the end 
    {
        sum2=sum2+array_elements[i];//adds the elements
           
    }
    cout<<"\nthe sum of given array is: "<<sum2<<endl;

}
    

//using vector array
    // vector<int> arr = {1,2,3};
    // int sum2 = 0;
    // for(auto i : arr)
    // {
    //     sum += i;
    // }
    // cout << accumulate(vec.begin(),vec.end(),0) << endl;
