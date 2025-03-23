#include <iostream>
using namespace std;
int main(){
    int number=6;
    //cout<<"enter non negative number: ";
    //cin>> number;
long long factorial=1;
for (int i=1; i<=number;i++){
    factorial *=i;
}
cout<< "factoril of"<< number<<factorial;
return 0;
}