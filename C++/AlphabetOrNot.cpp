//Program to check if Alphabet or not using character and ASCII values.

#include<iostream>
using namespace std;

// int main()                                                                       //Using characters
// {
//     char ch;
//     cin>>ch;
//     if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
//         cout<<"Alphabet";
//     else    
//         cout<<"Not an Alphabet";
//     return 0;
// }


int main()                                                                          //Using ASCII values
{
    char ch;
    int ascii;
    cin>>ch;
    ascii=ch;
    if(ascii>=65 && ascii<=90)
        cout<<"Uppercase Alphabet";
    else if(ascii>=97 && ascii<=122)
        cout<<"Lowercase Alphabet";
    else    
        cout<<"Not an Alphabet";
    return 0;
}

// Output:
// 1
// Not an Alphabet

// a
// Lowercase Alphabet

// M
// Uppercase Alphabet

// >
// Not an Alphabet
