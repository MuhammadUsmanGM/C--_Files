#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n ";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int b=1;b<=i;b++){
            if ((i+b)%2==0)
                cout<<1<<' ';
            else cout<<0<<" ";
        }
        cout<<endl;
    }
}