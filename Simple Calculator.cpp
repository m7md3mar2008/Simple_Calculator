#include <iostream>
using namespace std;

int main () {
    cout << "simple_caculator" <<endl;
    char op;
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter Operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter the second number: ";
    cin >> num2;

    if (op == '+')
            cout << num1 << "+"<<num2<< "=" <<num1 + num2;
           else if (op == '-')
            cout << num1 << "-" << num2 << "=" << num1 - num2;
           else if (op == '*')
            cout << num1 << "*" <<num2<< "=" <<num1 * num2;
            else if (op == '/'){
                if (num2 == 0)
                cout << "error!";
                else 
                cout << num1 << "/" << num2 << "=" << num1 / num2;          
            }
            else {
            cout << "error!";
            }
        
    cout << endl;
    cout << "thank you for using simple calculator" << endl;
    return 0;
}