#include <iostream>
using namespace std;
void greet(){
    cout<<"Hi"<<endl;
    greet();
    // it gives an infinite loop
}
int main(){
    greet();
}