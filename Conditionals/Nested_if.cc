#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter 1st integer: ";
    cin>>x;
    cout<<"Enter 2nd integer: ";
    cin>>y;
    cout<<"Enter 3rd integer: ";
    cin>>z;
    if (x>y){
        if (x>z)
        {cout<<x<<" is greatest.";
        }
        else{
            cout<<z<<" is greatest.";
        }
    }
    else{
        if (y>z) {
            cout<<y<<" is greatest.";
        }
        else{
            cout<<z<<" is greatest.";
        }
            }
    }