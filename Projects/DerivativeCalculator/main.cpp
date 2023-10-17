#include <iostream>
using std::cout;
using std::cin;
using std::string;

bool isOperator(char letter);

int main(){
    string input;
    int numTerms = 1;

    cout << "Enter expression: ";
    getline(cin, input);

    for (int i = 0; i < input.length(); i++) {
        if (isOperator(i)) {
            numTerms++;
        }
    }

    cout << "You've entered " << numTerms << " terms.\n";

    return 0;
}

bool isOperator(char letter){
    switch(letter){
        case '+':
            return true;
        case '-':
            return true;
        case '*':
            return true;
        case '/':
            return true;
        default:
            return false;
    }
}