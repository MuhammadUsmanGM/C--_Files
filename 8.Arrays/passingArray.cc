#include <iostream>
using namespace std;
void change(int arr[]){
    arr[1]=8;
}
int main(){
    int arr[3] = {1,3,5};
    for (int i=0;i<=2;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    change(arr);
    arr[0] = 9;
    for (int i=0;i<=2;i++){
        cout<<arr[i]<<" ";
    }
}