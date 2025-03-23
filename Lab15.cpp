#include <iostream> 
using namespace std;
template <class T>
T min(T x,T z){
    T result;
    result=(x<z)? x:z;
    return result;
}
int main(){
    int minimum= min(17,30);
    double D_minimum= min(4.5, 3.1);
    cout<< "The minimum decimal is: "<< D_minimum<<endl;
    cout<<"The minimum number is: "<< minimum<< endl;
    //int i=5,j=6,k;
   // double f=2.0, g=0.5,h;
   // k=min<int>(i,j);
   // h=min<double>(f,g);
   // cout<<k<<endl;
    //cout<<h<<endl;
    return 0;
}
