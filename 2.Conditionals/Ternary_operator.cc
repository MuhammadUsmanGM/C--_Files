#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter an integer: ";
    cin>>x;
    (x%2==0) ? cout<<"even" : cout<<"Odd" ;
    
}
//Syntax of ternary operator is
//start with condition without writing if
//(condition)? if true : if false;
