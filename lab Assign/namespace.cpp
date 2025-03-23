#include <iostream>
#include <string>
using namespace std;
namespace MyCode{
    string code1= "Java";
    string code2="C++";
}
namespace MyNumber{
    int num1= 14;
    double num2= 28.303;
}
int main(){
    cout<< MyCode::code1<<endl;
    cout<<MyCode::code2<<endl;
    using MyNumber::num1;
    using MyNumber::num2;
    cout<<num1<<endl;
    cout<<num2<<endl;
    return 0;
}