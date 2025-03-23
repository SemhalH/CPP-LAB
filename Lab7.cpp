#include <iostream>
#define PI_DEFINE 3.14159  

int main(){
    const double pi_const = 3.14159;  
    
    std::cout << "PI using #define: " << PI_DEFINE << std::endl;
    std::cout << "PI using const: " << pi_const << std::endl;
    return 0;
}
