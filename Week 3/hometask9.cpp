<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
    int number;
    int digit1, digit2, digit3, digit4;
    int sum;
    cout << "Enter a 4-digit number: ";
    cin >> number;
    int originalNumber = number;
    digit4 = number % 10;       
    number = number / 10;         
    digit3 = number % 10;        
    number = number / 10;       
    digit2 = number % 10;        
    number = number / 10;        
    digit1 = number % 10;        
    sum = digit1 + digit2 + digit3 + digit4;
    cout << "\nSum of digits: "  << sum << endl;

=======
#include <iostream>
using namespace std;

int main() {
    int number;
    int digit1, digit2, digit3, digit4;
    int sum;
    cout << "Enter a 4-digit number: ";
    cin >> number;
    int originalNumber = number;
    digit4 = number % 10;       
    number = number / 10;         
    digit3 = number % 10;        
    number = number / 10;       
    digit2 = number % 10;        
    number = number / 10;        
    digit1 = number % 10;        
    sum = digit1 + digit2 + digit3 + digit4;
    cout << "\nSum of digits: "  << sum << endl;

>>>>>>> 6928e432922971c0dd3cd7ac34905dfb9482a3b3
}