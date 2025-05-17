#include <iostream>
using namespace std;
void greet(int x,int n){
    if (x>n) return;
    cout<<x<<endl;
    greet(x+1,n);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    greet(1,n);
}