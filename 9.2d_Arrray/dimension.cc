#include <iostream>
using namespace std;
int main(){
    int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int i1= 1, j1 = 1;
    int i2=4, j2 = 2;
    int sum = 0;
    for (int i= i1;i<=i2;i++){
        for (int j=j1;j<=j2;j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum;
}