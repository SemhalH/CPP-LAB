#include <iostream>
#include <string>

int main(){
    int value = 10;
    std::cout << "Initial value: " << value << std::endl;
    
    value += 5; 
    std::cout << "After adding 5: " << value << std::endl;
    
    value -= 3; 
    std::cout << "After subtracting 3: " << value << std::endl;
    
    std::string message = (value > 10) ? "Value is greater than 10" : "Value is not greater than 10";
    std::cout << message << std::endl;
    
    return 0;
}
