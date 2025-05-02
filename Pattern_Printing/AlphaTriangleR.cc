#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n ";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int b=1;b<=i;b++){
            cout<<(char)(b+64)<<" ";
        }
        cout<<endl;
    }
}