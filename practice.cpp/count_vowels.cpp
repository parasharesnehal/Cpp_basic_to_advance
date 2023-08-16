#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int vowels = 0;
    int consonant=0;
    int space=0;
    cout<<"enter a string ";
    cin>>str;
                                                                              // can also do str[i] != '\0' in condition below both would work
    for(int i = 0; str[i]; i++)  
    {
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
        ||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')   //vowels check
        {
		    vowels++;
        }
        else if(str[i]==' ')                                                 //words check
        { 
            space++;
        }
        else
        {
         consonant++;                                                       // consonants
        }
    }
    
    cout << "Total Vowels : " << vowels<<endl;
    cout << "Total consonants : " << consonant<<endl;
    cout << "Total words : " <<space+1<<endl;
    
    return 0;
}