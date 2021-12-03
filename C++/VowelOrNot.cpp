//Program to check vowel or not
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        int LowerVowel, UpperVowel;
        LowerVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
        UpperVowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
        if (LowerVowel)
            cout << "Lower vowel";
        else if (UpperVowel)
            cout << "Upper vowel";
        else
            cout << "Consonant";
    }
    else
        cout << "Not a character";
    return 0;
}

// Output:
// Enter a character: U
// Upper vowel
//``````````````````````````````````````````````````````````````````````````````````````````````````````````````

//Using Switch

// int main()
// {
//     char ch;
//     cout<<"Enter a character: ";
//     cin>>ch;
//     switch (ch)
//     {
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//         case 'A':
//         case 'E':
//         case 'I':
//         case 'O':
//         case 'U':
//             cout<<"Vowel";
//             break;
    
//         default:
//             cout<<"Not a vowel";
//             break;
//     }
//     return 0;
// }

// Output:
// Enter a character: e
// Vowel
// Enter a character: t
// Not a vowel
