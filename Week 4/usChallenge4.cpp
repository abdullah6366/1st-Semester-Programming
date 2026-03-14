#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a single small case character : ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << "The character is a vowel " << endl;
    }
    if (ch == 'b' || ch == 'c' || ch == 'd' || ch == 'f' || ch == 'j' || ch == 'k' || ch == 'l' || ch == 'm' || ch == 'n' || ch == 'p' || ch == 'q' || ch == 'r' || ch == 's' || ch == 't' || ch == 'v' || ch == 'x' || ch == 'y' || ch == 'z')
    {
        cout << "The character is a consonant" << endl;
    }
    if (ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9' || ch == '0')
    {
        cout << "The character is a number " << endl;
    }
}
