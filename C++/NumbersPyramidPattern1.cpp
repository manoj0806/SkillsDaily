// Given a positive integer n. Task is to print the pyramid pattern as described in the example below.
// Input : 2
// Output :
//         1
//         22
//         1

// Input : 5
// Output : 
//         1
//         22
//         333
//         4444
//         55555
//         4444
//         333
//         22
//         1



#include <iostream>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;

    for(i=1;i<=n;i++)           //outer loop to handle rows
    {
        for(j=1;j<=i;j++)       //inner loop to handle columns
            cout<<i;
        cout<<"\n";
    }

    for(i=n-1;i>0;i--)
    {
        for(j=i;j>0;j--)
            cout<<i;
        cout<< "\n";
    }
return 0;
}
  
  
// ///////////////////////////////// Another way //////////////////////////////////
  
// #include <bits/stdc++.h>
// using namespace std;
 
// // Print the pattern upto n
// void printPattern(int n)
// {
//     // Printing upper part
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//             cout << i;       
//         cout << "\n";
//     }
 
//     // printing lower part
//     for (int i = n - 1; i > 0; i--)
//     {
//        for (int j = i; j > 0; j--)
//             cout << i;       
//         cout << "\n";
//     }
// }
 
// // Driver Code
// int main()
// {
//     int n = 8;
//     printPattern(n);
//     return 0;
// }
