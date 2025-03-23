#include <iostream>
int main(){
    char letter = 'B';
    int number = 50;
    float decimalNumber = 2.5f;
    bool isActive = false;
    
    letter = 'Z';
    number += 50;            
    decimalNumber *= 2;     
    isActive = !isActive;    
    std::cout << "Updated Char: " << letter << "\n";
    std::cout << "Updated Int: " << number << "\n";
    std::cout << "Updated Float: " << decimalNumber << "\n";
    std::cout << "Updated Bool: " << isActive << "\n";
    return 0;
}
