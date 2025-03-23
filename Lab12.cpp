#include <iostream>

int main(){
    int x = 5;
    
    if (x > 0)
        std::cout << "x is positive" << std::endl;
    else
        std::cout << "x is not positive" << std::endl;
    
    
    switch (x) {
        case 1:
            std::cout << "x is 1" << std::endl;
            break;
        case 5:
            std::cout << "x is 5" << std::endl;
            break;
        default:
            std::cout << "x is neither 1 nor 5" << std::endl;
    }
    
    std::cout << "Countdown: ";
    for (int i = 3; i > 0; i--) {
        std::cout << i << " ";
    }
    std::cout << "liftoff!" << std::endl;
    
    return 0;
}
