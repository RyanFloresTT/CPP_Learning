#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    char unit;
    double temp;

    cout << "******** Temperature Conversion ********\n";
    cout << "What unit would you like to convert to?\n";
    cout << "F = Fahrenheit || C = Celsius\n";
    cin >> unit;

    unit = std::tolower(unit);

    if(unit == 'f' || unit == 'c'){
        string temperatureName = unit == 'f' ? "Celsius" : "Fahrenheit";

        cout << "Enter " << temperatureName << " value: \n";
        cin >> temp;

        temp = unit == 'f' ? (1.8 * temp) + 32 : (temp - 32) / 1.8;
        cout << "Temperature is " << temp << unit << '\n';
    } else {
        cout << unit << " is an invalid unit for temperature. Please use either F or C.\n";
    }
    return 0;
}