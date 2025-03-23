#include <iostream>
#include <string>
using namespace std;
float operate(float x,float y, float z){
    return (x*y/z);
}
 int operate(int x, int y, int z){
    return (x+y-z);
 }
 int main(){
    int x=10, y=2,z=4;
    float a=10.0, b=2.0,c=4.0;
    cout<< operate(x,y,z)<<endl;
    cout<< operate(a,b,c)<<endl;
    return 0;
 }