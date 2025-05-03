#include <iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"Enter 1st num: ";
    cin>>a;
    cout<<"Enter second num: ";
    cin>>b;
    cout<<sum(a,b);
}