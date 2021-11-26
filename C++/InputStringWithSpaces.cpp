//This program uses gets() to receive string input from user along with all the spaces.

#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cout<<"Enter a string: ";
    // cin>>str;                   // This receives only string before space and rest of the string gets skipped.
    gets(str);                     // To get string input along with spaces, use gets() or getline() function -> gets(str); or getline(cin,str);
    cout<<str;
    return 0;
    
}

// Output (cin):
// Enter a string: Hi, I'm Anusha
// Hi,

// Output (gets()):
// Enter a string: Hi, I'm Anusha
// Hi, I'm Anusha
