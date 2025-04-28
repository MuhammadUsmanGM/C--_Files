#include <iostream>
using namespace std;
int main(){
    int a,b;
    char ch;
    cin>>a;
    cin>>ch;
    cin>>b;
    switch(ch){
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        default:
        cout<<"Enter a valid operater";

    }   
}