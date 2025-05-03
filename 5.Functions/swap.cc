#include <iostream>
using namespace std;
int main(){
    int x = 2;
    int y = 5;
    int temp = x;
    cout<<x<<" "<<y<<endl;
    // x = y;
    // y = temp;
    // cout<<x<<" "<<y;
    x = x+y;
    y = x-y;
    x = x-y;
    cout<<x<<" "<<y<<endl;
}