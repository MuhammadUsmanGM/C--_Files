#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str = "Muhammad Usman ";
    int n = str.length();
    reverse(str.begin()+1, str.begin() + 5);
    cout << str << endl;
}