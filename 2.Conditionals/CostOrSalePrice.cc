#include <iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<< "Enter Cost Price: ";
    cin>>cp;
    cout<<"Enter Sale Price: ";
    cin>>sp;
    if (cp>sp){
        cout<<"Loss is "<<cp-sp;
    } 
    else if (cp<sp) {
        cout<<"Profit is "<<sp-cp;
    } 
    else if (cp==sp) {
        cout<<"No loss. No Profit.";
    }
}