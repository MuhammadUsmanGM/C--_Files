#include <iostream>
using namespace std;
void swap(int* a,int* b){
    //& is used to pass by reference
    int temp = *a;
    *a =*b;
    *b = temp;
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