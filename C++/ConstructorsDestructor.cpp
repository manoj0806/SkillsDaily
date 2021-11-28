//Program to showcase different types of Constructors(Default, Parameterized, Copy) and Destructor.

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
            cout<<"And I love "<<MyFave<<"."<<endl<<endl;
        }

        Mydetails()                                                         //Default constructor
        {
            cout<<"Default constructor is called"<<endl<<endl;
            // MyName = "Anu";
        }

        Mydetails(string name, int age, string place, string fave)          //Parameterized constructor
        {
            cout<<"Parameterized constructor is called"<<endl;
            MyName = name;
            MyAge = age;
            MyPlace = place;
            MyFave = fave;
        }

        Mydetails(Mydetails &obj)                                           //Copy constructor
        {
            cout<<"Copy constructor is called"<<endl;
            MyName = obj.MyName;
            MyAge = obj.MyAge;
            MyPlace = obj.MyPlace;
            MyFave = obj.MyFave;
        }
  
        ~Mydetails()                                                        //Destructor
        {
            cout<<"Destructor is called"<<endl;                            
        }

};

int main()
{
    Mydetails obj1;                                                   //This is the place where Default constructor is called                   
    // obj1.data("Anusha",21,"Bangalore","Shin Chan");
    // obj1.displayData();
  
    Mydetails obj2("anu",20,"India","Shin");                          //This is the place where Parameterized constructor is called
    obj2.displayData();
  
    Mydetails obj3 = obj2;                                            //This is the place where Copy constructor is called
    obj3.displayData();
  
    return 0;
}

// Output:
// Default constructor is called      

// Parameterized constructor is called
// My details:
// My name is anu.
// I'm a 20 years old working woman.  
// I live in India.
// And I love Shin.

// Copy constructor is called
// My details:
// My name is anu.
// I'm a 20 years old working woman.  
// I live in India.
// And I love Shin.

// Destructor is called                                    //Destructor is called thrice because there are three objects, so each time a object ends, the destructor is called
// Destructor is called
// Destructor is called
