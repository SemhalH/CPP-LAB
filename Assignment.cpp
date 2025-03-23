#include <iostream>
#include <String>
#define tax_rate 0.15
using namespace std;
int main(){
    cout<< "A program that analyzes product sales and inventory for store!"<< endl;
    cout<<" C++ is a compiled language!"<<endl;

    string product_name;
    int product_category;
    int initial_inventory_quality;
    float product_price_per_unit;
    int num_of_item_sold;

    int new_inventory;
    float total_sales_amount;
    string inventory_status;

    string product_color= "Black";
    string product_model;
    product_model= "NEW 00";
    int product_amount{50};
    
    auto total_sales_copy= total_sales_amount;
    decltype(initial_inventory_quality) initial_copy= 80;

    const double tax_rate_const = 0.15;

    cout<<"Enter product name: ";
    cin>> product_name;
    cout<<"Emter product category(1-5): ";
    cin>> product_category;
    cout<<"Enter initial inventory quality: ";
    cin>> initial_inventory_quality;
    cout<<"Enter product price per unit: ";
    cin>>product_price_per_unit;
    cout<<"Enter number of item sold: ";
    cin>> num_of_item_sold;

    new_inventory= initial_inventory_quality;
    new_inventory-=num_of_item_sold;
    total_sales_amount= num_of_item_sold*product_price_per_unit;
    
    inventory_status= (new_inventory<10)? "Low inventory":"Sufficient inventory";

    if (product_category>=1 && product_category<=5){
        switch (product_category){
        case 1:
             cout<<"category 1: Electronics"<<endl;
            break;
        case 2:
            cout<<"category 2: Groceries"<<endl;
            break;
        case 3: 
            cout<<"category 3: clothing"<<endl;
            break;
        case 4:
            cout<<"category 4: Stationary"<<endl;
            break;
        case 5:
            cout<<"category 5: Miscelaneous"<<endl;
            break;
        }
     } 
     else{
        cout<<"UNDETERMIINED CATEGORY!"<<endl;
    }
        cout<<"Receipt:"<<endl;
    for (int i=1; i<=num_of_item_sold; ++i){
        cout<<"Item"<< i<<  "= $"<< product_price_per_unit<<endl;
    }

    cout<<"tax rate: "<< tax_rate<<endl;
    cout<<"tax rate const: "<< tax_rate_const<<endl;

    cout<<"Detailed summary of the analaysis>>>>>>"<< endl;
    cout<<"product details:"<<endl;
    cout<<"product name: "<< product_name<<endl;
    cout<<"product catagory: "<<product_category<<endl;
    cout<<"initial inventory quality: "<<initial_inventory_quality<<endl;
    cout<<"product price:  "<<product_price_per_unit<<endl;
    cout<<"number of item sold: "<<num_of_item_sold<<endl<<'\n';

    cout<<"computed amounts:"<<endl;
    cout<<"new inventory: "<<new_inventory<<endl;
    cout<<"total sales amount: "<<total_sales_amount<<endl;
    cout<<"inventory states: "<< inventory_status<<endl;
    cout<<"total sales copy: "<< total_sales_copy<<endl;
    cout<<"initial copy: "<<initial_copy<<endl;
    cout<<"product color: "<<product_color<<endl;
    cout<<"product model: "<<product_model<<endl;
    cout<<"product amount: "<<product_amount<<endl;
return 0;
}
