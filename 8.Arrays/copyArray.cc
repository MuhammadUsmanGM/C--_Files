#include <iostream>
using namespace std;
int main(){
    int arr[]={2,34,5,6,74,32};
    int n = sizeof(arr)/4;
    int b[n];
    for (int i=0;i<n;i++){
        int j = n-1-i;
        b[i] = arr[j];
        cout<<b[i]<<" ";
    }

}