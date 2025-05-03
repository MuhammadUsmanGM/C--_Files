#include <iostream>
using namespace std;
int main(){
    string name;
    cout<<"Enter Your Name(no spaces): ";
    cin>>name;
    string id;
    cout<<"Enter Your VU id: ";
    cin>>id;
    cout<<"Name: "<<name<<endl;
    cout<<"Student ID: "<<id<<endl;
    string numeric_id;
    cout<<"Enter the numeric part of your VU ID(9 digits): ";
    cin>>numeric_id;
    string middle_numbers = numeric_id.substr(2,5);
    cout<<"Extrated 5 Digits: "<<middle_numbers<<endl;

    int burger_price = 250.0;
    int  pizza_price = 500.0;
    int  fries_price = 150.0;
    int  sandwich_price = 200.0;
    int  cold_drink_price = 100.0;

    int burger_qty = middle_numbers[0] - '0';
    int pizza_qty = middle_numbers[1] - '0';
    int fries_qty = middle_numbers[2] - '0';
    int sandwich_qty = middle_numbers[3] - '0';
    int cold_drink_qty = middle_numbers[4] - '0';

    int  burger_total = burger_price * burger_qty;
    int  pizza_total = pizza_price * pizza_qty;
    int  fries_total = fries_price * fries_qty;
    int  sandwich_total = sandwich_price * sandwich_qty;
    int  cold_drink_total = cold_drink_price * cold_drink_qty;

    int  total_bill = burger_total + pizza_total + fries_total + sandwich_total + cold_drink_total;
    
    cout<<"_____Welcome To C++ Cafe_____"<<endl;
    cout<<"_____Item Details____"<<endl;
    string items[5] = {"Burger", "Pizza", "Fries", "Sandwich", "Cold Drink"};
    int quantities[5] = {burger_qty, pizza_qty, fries_qty, sandwich_qty, cold_drink_qty};
    int prices[5] = {burger_price, pizza_price, fries_price, sandwich_price, cold_drink_price};
    int subtotals[5] = {burger_total, pizza_total, fries_total, sandwich_total, cold_drink_total};

    for (int i = 0; i < 5; i++) {
    cout << items[i] << "  Quantity: " << quantities[i]
         << "  Unit Price: " << prices[i]
         << "  Subtotal: " << subtotals[i] << endl;
}
    if (total_bill<5000){
        cout<<"Your Total is: "<<total_bill<<endl;
        cout<<"Enjoy Your Food."<<endl;
        cout<<"Thank You For Visiting C++ Cafe."<<endl;
    }
    else{
        cout<<"Your total bill is: "<<total_bill<<endl;
        cout<<"You got 10% discount on total bill."<<endl;
        float  discounted_bill = total_bill * 0.10;
        float after_discount = total_bill - discounted_bill; 
        cout<<"Discounted Amount: "<<discounted_bill<<endl;
        cout<<"Your total after discount is: "<<after_discount<<endl;
        cout<<"Enjoy Your Food."<<endl;
        cout<<"Thank You For Visiting C++ Cafe."<<endl;

    }
}