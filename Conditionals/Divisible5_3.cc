#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter an integer: ";
    cin>>x;
    if (x%5==0 && x%3==0) {
        cout<<"Number is Divisible by both 5 and 3";
    } 
    else {
        cout<<"Number is not divisible by 5 and 3";
    }
}