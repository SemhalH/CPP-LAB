#include <iostream>
#include <string>
int main(){
    std::string sentence;
    std::cout << "Enter a sentence (no spaces): ";
    std::cin >> sentence; 
    sentence += "!";
    std::cout << "Modified sentence: " << sentence << std::endl;
    
  return 0;
}
