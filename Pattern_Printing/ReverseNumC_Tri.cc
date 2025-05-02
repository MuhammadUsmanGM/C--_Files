#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n ";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int b=n+1-i;b>=1;b--){
            cout<<b<<" ";
        }
        cout<<endl;
    }
}