//Program to print my details using class and object.

#include<iostream>
// #include<string>
using namespace std;

class Mydetails
{
    private:
        string MyName;
        int MyAge;
        string MyPlace;
        string MyFave;

    public:
        void data(string name, int age, string place, string fave)
        {
            MyName = name;
            MyAge = age;
            MyPlace = place;
            MyFave = fave;
        }

        void displayData()
        {
            cout<<"My details:"<<endl<<endl;
            cout<<"My name is "<<MyName<<"."<<endl;
            cout<<"I'm a "<<MyAge<<" years old working woman."<<endl;
            cout<<"I live in "<<MyPlace<<"."<<endl;
            cout<<"And I love "<<MyFave<<"."<<endl;
        }

};                                                                              // semi-colon

int main()
{
    Mydetails obj;
    obj.data("Anusha",21,"Bangalore","Shin Chan");
    obj.displayData();
    return 0;
}

// Output:
// My details:

// My name is Anusha.
// I'm a 21 years old working woman.
// I live in Bangalore.
// And I love Shin Chan.
