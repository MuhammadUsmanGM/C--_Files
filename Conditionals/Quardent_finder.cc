#include <iostream>
using namespace std;
int main(){
    int x, y ;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
    if (x>0 && y>0){
        cout<<"Given Components "<<"("<<x<<","<<y<<")"<<" Lies in 1st quadrant.";
    }
    else if (x<0 && y>0){
        cout<<"Given Components "<<"("<<x<<","<<y<<")"<<" Lies in 2nd quadrant.";
    }
    else if (x<0 && y<0){
        cout<<"Given Components "<<"("<<x<<","<<y<<")"<<" Lies in 3rd quadrant.";
    }
    else if (x>0 && y<0){
        cout<<"Given Components "<<"("<<x<<","<<y<<")"<<" Lies in 4th quadrant.";
    }
}