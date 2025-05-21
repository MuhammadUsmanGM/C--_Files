#include <iostream>
using namespace std;
int main(){
    int arr[]={2,34,5,6,74,32};
    int n = sizeof(arr)/4;
    int i=0;
    int j = n-1;
    while (i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for (i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}