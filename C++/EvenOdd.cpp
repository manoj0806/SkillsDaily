//Program to check if the given number is Odd or Even using if-else statements, ternary operators.
#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter a number:";
    cin>>number;

//     if(number%2==0)                                                    //if-else
//         cout<<"Number is even";
//     else    
//         cout<<"Nmuber is odd";

    (number%2==0)?(cout<<"Number is even"):(cout<<"Number is odd");       //Ternary operators statement:   <condition> ? <true_case> : <false_case>;
    return 0;
}


// ````````````````````````````````````````````````````````````````````````````````````````````````````````````
//Another way 
// #include<iostream>
// using namespace std;

// int main()
// {
//     int number, value;
//     cout<<"Enter a number: ";
//     cin>>number;
//     value = (number%2==0)?1:0;
//     if(value==1)
//         cout<<"Number is even";
//     else    
//         cout<<"Number is odd";
//     return 0;
// }

//`````````````````````````````````````````````````````````````````````````````````````````````````````````````
// Output:
// Enter a number:3
// Number is odd

// Enter a number:46
// Number is even
