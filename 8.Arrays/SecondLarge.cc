#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,9};
    int n = sizeof(arr)/4;
    int mx = arr[0];
    int sec = arr[0];
    for (int i=0; i<n;i++){
        if (arr[i]>mx) mx = arr[i];
    }
    for (int i=0; i<n;i++){
        if (arr[i]!=mx) sec = arr[i];
    }
    cout<<sec;
}