#include <iostream>

int main(){
    int x = 10;            
    auto y = x;            
    decltype(x) z = 20;    

    std::cout << "x: " << x << ", y: " << y << ", z: " << z << std::endl;
    return 0;
}
