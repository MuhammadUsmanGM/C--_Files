#include <iostream>
using namespace std;
int main(){
    int arr[5] = {4,5,6,7,8};//declaration & initialization of array
    arr[1]=23;
    arr[4]=76;
    for (int i=4;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}