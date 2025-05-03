#include <iostream>
using namespace std;
void swap(int& x,int& y){//& is used to pass by reference
    x = x+y;
    y = x-y;
    x = x-y;
}
int main(){
    int x = 2;
    int y = 5;
    int temp = x;
    cout<<x<<" "<<y<<endl;
    // x = y;
    // y = temp;
    // cout<<x<<" "<<y;
    swap(x,y);
    cout<<x<<" "<<y<<endl;

}