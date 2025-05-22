#include <iostream>
using namespace std;
int main(){
    int arr[4][2] = {{1,98},{2,67},{3,97},{4,90}};
    for (int i=0;i<4;i++){
        for (int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}