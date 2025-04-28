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
    if (x>y && x>z){
        cout<<x<<" is greatest of them.";
    }
    else if (y>x && y>z){
        cout<<y<<" is greatest of them.";
    }
    else if (z>x && z>y){
        cout<<z<<" is greatest of them.";
    }
}