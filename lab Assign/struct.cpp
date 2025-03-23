#include <iostream>
#include<string>
using namespace std;
struct Car_brand{
    string brand_name;
    double price;
};
int main(){
    string Our_car;
    Car_brand aCarbrand;
    Car_brand * pCarbrand= &aCarbrand;

    cout<<"Enter Brand name: ";
    cin>>pCarbrand->brand_name;
    cout<<"Enter Car price: ";
    cin>>pCarbrand->price;
    cout<<"Brand: "<<pCarbrand->brand_name<<endl;
    cout<<"price: "<<pCarbrand->price<<endl;
    return 0;
}

