#include <bits/stdc++.h>
using namespace std;

void reverse(int start,int end,int arr[])
{
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()                                               
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr) / sizeof(arr[0]);
    print(arr,n);                                         //Prints original array
    reverse(0,n-1,arr);                                   
    print(arr,n);                                         //Prints reversed array
    return 0;
}

// int main()                                              //Takes user Input
// {
//     int arr[10],n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
//     print(arr,n);
//     reverse(0,n-1,arr);
//     print(arr,n);
//     return 0;
// }


// Output:
// 1 2 3 4 5 6 
// 6 5 4 3 2 1
