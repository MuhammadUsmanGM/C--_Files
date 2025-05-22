#include <iostream>
using namespace std;
int main(){
    int arr[3][2] = {{1,2},{3,4},{5,9}};
    int mn = arr[2][1];
    for (int i=0; i<3;i++){
        for (int j=0;j<2;j++){
            if (arr[i][j]<mn) mn = arr[i][j];
        }
    }
    cout<<mn;
}