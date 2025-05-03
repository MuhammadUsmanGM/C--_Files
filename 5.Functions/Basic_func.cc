#include <iostream>
using namespace std;
void greet(){
    cout<<"Good Morning"<<endl;
    return;//To tell that the func is finished
    cout<<"Good Morning"<<endl;
}
int main(){
    greet();
    cout<<"Hi"<<endl;
    greet();
}
