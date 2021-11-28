//Program to add two numbers using function.

#include<bits/stdc++.h>
using namespace std;

int add(int a,int b);
int main()
{
    int num1, num2,result;
    cout<<"Enter two numbers to add: ";
    cin>>num1>>num2;
    result = add(num1,num2);
    cout<<"The sum of two numbers is: "<<result;
    return 0;
}

int add(int a,int b)
{
    return(a+b);
}

// Output:
// Enter two numbers to add: 1 2
// The sum of two numbers is: 3  


//....................................................................................................
//Program to add two numbers without using functions.
// int main()
// {
//     int num1, num2, result;
//     cout<<"Enter two numbers to add: ";
//     cin>>num1>>num2;
//     result = num1+num2;
//     cout<<"The sum of two numbers is:  = "<<result;
//     return 0;
// }


//.....................................................................................................
//Program to add two numbers using Recursion.
// int add(int a, int b)
// {
//     if (b==0)
//         return a;
//     else    
//         return(1 + add(a,b-1));                            //Function is calling itself.
// }

// Output:
// Enter two numbers to add: 1 2
// The sum of two numbers is: 3 
