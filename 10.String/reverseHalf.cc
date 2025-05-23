#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str = "Muhammad Usman ";
    int n = str.length();
    reverse(str.begin(), str.begin() + n / 2);
    cout << str << endl;
}