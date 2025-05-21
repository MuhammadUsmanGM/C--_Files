#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};//declaration of array
    int n = sizeof(arr)/4;
    int sum = 0;
    for (int i =0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum;
}