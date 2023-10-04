// No Sort, Linear Search

#include <iostream>

int main(){
    int nums[] = { 3, 1, 4, 5, 2, 7, 6, 10, 9, 8};
    int numSize = sizeof(nums)/sizeof(nums[0]);
    
    int searchValue = -1;

    std::cout << "Choose a number from 1-10 to search for: ";
    std::cin >> searchValue;

    do{
        std::cout << "Please choose a number between 1-10: ";
        std::cin >> searchValue;
    } while (searchValue < 0 || searchValue > 10);


    for(int i = 0; i < numSize; i++){
        if (nums[i] == searchValue){
            std::cout << "Index of " << searchValue << " is " << i << ".\n";
            return 0;
        }
    }
    return 0;
}