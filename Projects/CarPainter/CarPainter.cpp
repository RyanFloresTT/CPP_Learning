// This program is to use references for the first time :)

#include <iostream>

struct Car{
    std::string make;
    std::string model;
    std::string color;
    int year;
};

void PaintCar(Car &car, std::string color);

int main(){
    std::string newColor;
    Car car = {
        "Chevy",
        "Camaro",
        "Blue",
        2023
    };

    std::cout << "You have a " << car.year << " " << car.color << " " << car.make << " " << car.model << ".\n";
    std::cout << "Pick a new color for you car: ";
    getline(std::cin, newColor);

    PaintCar(car, newColor);

    std::cout << "You've painted your " << car.year << " " << car.make << " " << car.model << ", " << car.color << "!\n";


    return 0;
}

void PaintCar(Car &car, std::string color){
    car.color = color;
}