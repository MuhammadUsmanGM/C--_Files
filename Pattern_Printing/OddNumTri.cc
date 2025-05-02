#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n ";
    cin>>n;
    for (int i=1;i<=n;i++){
        int a = 1;
        for (int b=1;b<=i;b++){
            cout<<a<<" ";
            a+=2;
        }
        cout<<endl;
    }
}