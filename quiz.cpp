#include <iostream>
using namespace std;
int digitsum(int n){
    if(n==0){
        return 0;
    }
    else{
        return (n % 10) +digitsum(n/10);
    }
}
int main(){
    int num;
    cout<< "enter a positive intiger: ";
    cin>> num;
if (num<0){
    cout<< "please enter a positive integer."<<endl;
}
else{ 
    int sum=digitsum(num);
    cout<< "sum of digit:"<<sum<<endl;
}
return 0;
}
