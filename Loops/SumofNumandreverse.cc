#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int original_n = n;
    int reverse=0;
    while(n!=0){
        int ld = n%10;
        n/=10;
        reverse = reverse*10;
        reverse = reverse+ld;
    }
    cout<<reverse+original_n;
}