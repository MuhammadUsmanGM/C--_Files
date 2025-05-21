#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/4;
    int sumev = 0;
    int sumodd =0;
    for (int i=0; i<n;i++){
        if (i%2!=0) sumev+=arr[i];
        else if (i%2==0) sumodd+=arr[i];
    }
    cout<<sumev-sumodd;
}