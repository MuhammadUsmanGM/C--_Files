#include <iostream>
using namespace std;
int main(){
    for (int i=1;i<=10;i++){
        if (i==4 or i==7) continue;
        cout<<i<<" ";
    }
}