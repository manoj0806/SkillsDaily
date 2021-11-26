// C++ program to print smiley faces using it's ASCII value.

#include<iostream>
using namespace std;

int main()
{
    int smiley=1,number;                              //ASCII value of smiling face is 1
    char ch=smiley;
    cout<<"How many smiley you wanna print? ";
    cin>>number;
    for(int i=0;i<number;i++)
        cout<<ch<<" ";
    return 0;
}

// output:
// How many smiley you wanna print? 6
// ☺ ☺ ☺ ☺ ☺ ☺
