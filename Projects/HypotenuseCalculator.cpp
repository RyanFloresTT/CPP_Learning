#include <iostream>
#include <cmath>
using std::cin;
using std::cout;

int main(){
    double a;
    double b;
    double c;

    cout << "Enter A Side Value: ";
    cin >> a;
    cout << "Enter B Side Value: ";
    cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);
    cout << "Side C is " << c << " units long.\n";

    return 0;
}