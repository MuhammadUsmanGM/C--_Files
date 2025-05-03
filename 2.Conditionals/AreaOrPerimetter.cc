#include <iostream>
using namespace std;
int main(){
    int l,w;
    cout<<"Enter Length of Rectangle: ";
    cin>>l;
    cout<<"Enter Width of Rectangle: ";
    cin>>w;
    int a,p;
    a = l*w;
    p = 2*(l+w);
    cout<<"Area of rectangle is: "<<a<<endl;
    cout<<"Perimeter of rectangle is: "<<p<<endl;
    if (a>p) {
        cout<<"Area of rectangle is greater than the Perimeter.";
    }
    else if (a<p) {
        cout<<"Area of rectangle is less than the Perimeter.";
    }
}