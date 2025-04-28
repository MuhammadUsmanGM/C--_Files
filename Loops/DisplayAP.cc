#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int a =4;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a = a+3;
    }
}