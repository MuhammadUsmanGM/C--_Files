#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int b=1;b<=n;b++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
}