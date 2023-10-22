#include <iostream>

int main() {
    int favorite_number;
    std::cout << "Enter your Favorite Number: ";
    std::cin >> favorite_number;
    std::cout << "Amazing! " << favorite_number << " is my favorite number too." << std::endl; 
    //  I used the << operator to concatenate the output
    return 0;
}
