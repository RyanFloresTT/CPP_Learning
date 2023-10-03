#include <iostream>
#include <cmath>
using std::cout;
using std::cin;


int main(){
    char op;
    double num1;
    double num2;
    double result;

    cout << "******** CONSOLE CALCULATOR ********\n";

    cout << "Enter Operation ( + - * / ): ";
    cin >> op;;

    cout << "Enter Value for Your First Number: ";
    cin >> num1;

    cout << "Enter Value for Your Second Number: ";
    cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            cout << "Sorry, " << op << " is an invalid operator. Please use ( + - * /)\n";
            return 1;
    }

    cout << "Result : " << result << '\n';

    return 0;
}