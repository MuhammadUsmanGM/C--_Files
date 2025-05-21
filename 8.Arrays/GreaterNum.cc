#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int x = 4;
    int count = 0;
    for (int i=0;i<6;i++){
        if (arr[i]>x) count++;
    }
    cout<<count<<" ";
}