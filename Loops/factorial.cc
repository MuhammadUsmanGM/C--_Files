#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int pro = 1;
    for(int i=1;i<=n;i++){
        pro *=i;
    }
    cout<<pro;
}