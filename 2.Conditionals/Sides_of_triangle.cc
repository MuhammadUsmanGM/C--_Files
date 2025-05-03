#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the length of 1st side: ";
    cin>>a;
    cout<<"Enter the length of 2nd side: ";
    cin>>b;
    cout<<"Enter the length of 3rd side: ";
    cin>>c;
    if ((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"The sides can form a triangle";
    }
    else {
        cout<<"The sides cannot form a triangle";
    }
}