#include <iostream>
using namespace std;
int power(int a, int b){
    if (b==1) return a;
    int rec = a*power(a, b-1);
    return rec;
}
int main(){
    int a;
    cout<<"Enter base: ";
    cin>>a;
    int b;
    cout<<"Enter power: ";
    cin>>b;
    int p = power(a,b);
    cout<<p<<endl;
}