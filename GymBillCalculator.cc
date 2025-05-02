#include <iostream>
using namespace std;
int main(){
    int hour;
    cout<<"Enter the number of hours you spent in gym: ";
    cin>>hour;
    if (hour>0){
        if (hour==1){
            cout<<"Gym usage fee: 0Rs";
        }
        else if (hour>1){
            cout<<"Gym usage fee: "<<(hour-1)*200<<"Rs";
        }

    }
    else{
        cout<<"Enter a valid positive number of hours.";
    }
}