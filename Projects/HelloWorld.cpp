#include <iostream>

int main() {
    using std::cout;
    using string = std::string;

    // This program is cool
    /* 
        --- Welcome to HelloWorld.cpp --
            The best program in the world
    */
    
    int myAge = 25;
    int numPizzas = 0;
    bool isStudent = true;
    double myGPA = 3.7;
    string favoriteFood = "Pizza";

    const string NAME = "Ryan";

    cout << "Hello World! My name is " << NAME << "!\n";
    cout << "I am " << myAge << " years old.\n";
    cout << "My favorite food is " << favoriteFood << ".\n";
    numPizzas++;
    cout << "I made a pizza. Now I have " << numPizzas << " pizzas!\n";
    cout << "I'm kinda hungry now, I will eat a pizza...\n";
    cout << "Munch.. Munch...\n";
    numPizzas--;
    cout << "Now I only have " << numPizzas << " pizzas!\n";
    return 0;
}