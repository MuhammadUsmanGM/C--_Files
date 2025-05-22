#include <iostream>
using namespace std;
int main(){
    int arr[3][2] = {{1,2},{3,4},{5,9}};
    int mx = arr[0][0];
    for (int i=0; i<3;i++){
        for (int j=0;j<2;j++){
            if (arr[i][j]>mx) mx = arr[i][j];
        }
    }
    cout<<mx;
}