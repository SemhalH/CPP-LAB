#include <iostream>
#include <string>
using namespace std;
// Preprocessor constant for tax rate
#define PREPROC_TAX_RATE 0.08

int main() {
    // Introductory message
    cout << "Product Sales and Inventory Analysis Program\n";
    cout << "C++ is a compiled language.\n\n";

    // Variables for product details
    string productName;
    int productCategory;
    int initialInventoryQuantity = 100; // Direct initialization
    float productPrice;
    int itemsSold = 20; // Direct initialization

    // Variables for computed values
    int newInventory;
    float totalSalesAmount;
    string inventoryStatus;

    // Demonstrate different initialization methods
    float anotherPrice;
    anotherPrice = 15.50; // Assignment after declaration

    int anotherInventory{50}; // List initialization

    // Type deduction helper variables
    auto salesCopy = 0.0f;
    decltype(initialInventoryQuantity) inventoryCopy = 75;

    // Constant using const keyword
    const float CONST_TAX_RATE = 0.07;

    // Input from the user
    cout << "Enter product name: ";
    cin >> productName;

    cout << "Enter product category (1-5): ";
    cin >> productCategory;

    cout << "Enter initial inventory quantity: ";
    cin >> initialInventoryQuantity;

    cout << "Enter product price: ";
    cin >> productPrice;

    cout << "Enter number of items sold: ";
    cin >> itemsSold;

    // Perform calculations
    newInventory = initialInventoryQuantity;
    newInventory -= itemsSold; // Compound assignment

    totalSalesAmount = itemsSold * productPrice;
    salesCopy = totalSalesAmount;

    // Conditional (ternary) operator for inventory status
    inventoryStatus = (newInventory < 10) ? "Low Inventory" : "Sufficient Inventory";

    // Flow control: if-else for category validation
    if (productCategory >= 1 && productCategory <= 5) {
        // Flow control: switch for category message
        switch (productCategory) {
            case 1:
                cout << "Category 1: Electronics\n";
                break;
            case 2:
                cout << "Category 2: Groceries\n";
                break;
            case 3:
                cout << "Category 3: Clothing\n";
                break;
            case 4:
                cout << "Category 4: Stationery\n";
                break;
            case 5:
                cout << "Category 5: Miscellaneous\n";
                break;
        }
    } else {
        cout << "Invalid product category.\n";
    }

    // Flow control: for loop for receipt simulation
    cout << "\nReceipt:\n";
    for (int i = 1; i <= itemsSold; ++i) {
       cout << "Item " << i << ": $" << productPrice << "\n";
    }

    // Output all information
    cout << "\nTax Rates:\n";
    cout << "Preprocessor Tax Rate: " << PREPROC_TAX_RATE << "\n";
    cout << "Const Tax Rate: " << CONST_TAX_RATE << "\n\n";

    cout << "Product Summary:\n";
    cout << "Product Name: " << productName << "\n";
    cout << "Product Category: " << productCategory << "\n";
    cout << "Initial Inventory: " << initialInventoryQuantity << "\n";
    cout << "Product Price: $" << productPrice << "\n";
    cout << "Items Sold: " << itemsSold << "\n";
    cout << "New Inventory: " << newInventory << "\n";
    cout << "Total Sales Amount: $" << totalSalesAmount << "\n";
    cout << "Inventory Status: " << inventoryStatus << "\n";
    cout << "Sales Copy (auto): $" << salesCopy << "\n";
    cout << "Inventory Copy (decltype): " << inventoryCopy << "\n";
    cout << "Another price: $" << anotherPrice << endl;
    cout << "Another inventory: " << anotherInventory << endl;

    return 0;
}