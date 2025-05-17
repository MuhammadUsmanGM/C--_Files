#include <iostream>
using namespace std;
int pow(int n,int c){
    if (c==0) return 1;
    return n * pow(n, c-1);
}
int main(){
    int n, c;
    cout<<"Enter base :";
    cin>>n;
    cout<<"Enter power: ";
    cin>>c;
    cout<<pow(n,c)<<endl;
}