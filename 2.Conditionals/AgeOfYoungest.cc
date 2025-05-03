#include <iostream>
using namespace std;
int main(){
    int Ram, Shyam ,Ajay;
    cout<<"Enter the age of Ram: ";
    cin>>Ram;
    cout<<"Enter the age of Shyam: ";
    cin>>Shyam;
    cout<<"Enter the age of Ajay: ";
    cin>>Ajay;
    if (Ram<Shyam){
        if (Ram<Ajay){
            cout<<"Ram is the youngest one.";
        } else{
            cout<<"Ajay is the youngest one.";
        }
    }
    else{
        if (Shyam<Ajay){
            cout<<"Shyam is the youngest one.";
        }
        else{
            cout<<"Ajay is the youngest one.";
        }
    }
    }
