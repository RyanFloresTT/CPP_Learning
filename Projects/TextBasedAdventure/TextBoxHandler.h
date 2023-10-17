#ifndef TEXTBOXHANDLER_H
#define TEXTBOXHANDLER_H
#include <iostream>
using std::cout; 
using std::string;

class TextBoxHandler {
public:
    TextBoxHandler();
    void printMenu();
    void printMenu(string line1);
    void printMenu(string line1, string line2 );
    void printMenu(string line1, string line2, string line3 );
};

#endif