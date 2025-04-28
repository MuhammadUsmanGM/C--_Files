#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter an integer: ";
    cin>>x;
    if (x%5==0 or x%3==0) {
        cout<<"Number is Divisible by  5 or 3";
    } 
    else {
        cout<<"Number is not divisible by 5 or 3";
    }
}
//in place of or || can also be used