#include <iostream>

using namespace std;

int main(){
    int x;
    x = 5;
    float y;
    y = 54.5;
    string z; //initialization
    z = "Ali";//declaration
    cout << typeid(x).name();
    cout<<"\n";
    cout << typeid(y).name();
    cout<<"\n";
    cout << typeid(z).name();
    cout<<"\n";
    cout<<x+y;
    cout<<"\n";
    cout<<x*y;
    //These are comments for C++
    
}