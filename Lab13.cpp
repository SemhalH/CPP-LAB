#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter a non-negative integer: ";
    cin >> number;
    
    long long factorial = 1;
    for (int i = 1; i <= number; i++){
        factorial *= i;
    }
    
    cout << "Factorial of " << number << " is " << factorial <<endl;
    return 0;
}
