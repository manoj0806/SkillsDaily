#include<iostream>
using namespace std;
int main()
{
    int n, divisor =2;
    cin>>n;
    while(divisor<n)
    {
        if(n%divisor==0)
        {
            cout<<"not prime";
            exit(0);
        }
        else
        {
            divisor+=1;
        }
    }
    cout<<"Prime number";
    return 0;
}
