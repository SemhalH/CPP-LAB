#include <iostream>
using namespace std;
template <typename Type>
Type add(Type x, Type y){
    return x+y;
}
template <typename Type>
Type add(Type x, Type y,Type z){
    return x+y+z;
}
int main(){
    cout<<"The sum of two numbers is:  "<<add(6,7)<<endl;
    cout<<"The sum of three numbers is: "<<add(4,5,6)<<endl;
}
 