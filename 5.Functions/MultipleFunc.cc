#include <iostream>
using namespace std;
void usa(){
    cout<<"In USA"<<endl;
    return;
}
void pak(){
    cout<<"In Pak"<<endl;
    usa();
    return;
}
int main(){
    cout<<"In Main"<<endl;
    pak();
}