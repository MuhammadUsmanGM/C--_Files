#include <iostream>
#include <string>
using namespace std;
int main(){
    int num = 123;
    string str = to_string(num);
    cout << str << endl;
    str = str+ "gg";
    cout << str << endl;
}
