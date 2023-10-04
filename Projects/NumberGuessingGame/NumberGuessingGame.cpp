#include <iostream>
using std::cout;
using std::cin;

int main(){
    int num;
    int guess;
    int tries = 0;

    cout << "****** Number Guessing Game ******";
    srand(time(NULL));
    num = (rand() % 100) + 1;

    do {
        cout << "Guess a number 1 - 100: ";
        cin >> guess;
        tries++;

        if (guess > num){
            cout << "Too High!\n";
        } 
        else if (guess < num){
            cout << "Too Low!\n";
        }
        else{
            break;
        }

    } while(guess != num);
    cout << "Congrats! You got the right number in " << tries << " tries!";
    return 0;
}