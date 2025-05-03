#include <iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for (int i=1;i<=x;i++){
        f *= i;
    }
    return f;
}
int main(){
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    int a,b,c;
    a = fact(n);
    b = fact(r);
    c = fact(n-r);
    cout<<a/(b*c);
}