#include <iostream>
using namespace std;
/*Main Function to take input of three numbers and return the max out with using if else */
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c)
			cout<<a;
		else
			cout<<c;	
	}
	else
	{
		if(b>c)
			cout<<b;
		else
			cout<<c;
	}
	return 0;
}


//`````````````````````````````````````````````````````````````````````````````````````````````````````````````
//Another way

// int main()
// {
//     int a,b,c,maxi;
//     cin>>a>>b>>c;
//     maxi = a>b ? (a>c?a:c) : (b>c?b:c);
//     cout<<maxi;
//     return 0;
// }

// Output:
// 3 1 5
// 5
