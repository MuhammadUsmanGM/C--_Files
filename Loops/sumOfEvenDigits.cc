#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int sum=0;
    while(n!=0){
        int ld = n%10;
        n/=10;
        if (ld%2==0){ 
            sum +=ld;}
    }
    cout<<sum;
}