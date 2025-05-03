#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter marks: ";
    cin>>n;
    if (n>=81 && n<=100){
        cout<<"Ver Good";
    }
    else if (n>=61 && n<=80){
        cout<<"Good";
    }
    else if (n>=41 && n<=60){
        cout<<"Average";
    }
    else if (n>0 && n<=40){
        cout<<"Fail";
    }
    else{
        cout<<"Invalid input"<<endl;
        cout<<"Enter the valid marks between 1 to 100";
    }
}