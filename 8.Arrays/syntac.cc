#include <iostream>
using namespace std;
int main(){
    int arr[5];//declaration of array
    cout<<"Enter array elements: ";
    for (int i=0;i<=4;i++){
        cin>>arr[i];
    }
    arr[1]=23; //update
    for (int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
}