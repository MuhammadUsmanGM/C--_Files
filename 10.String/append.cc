#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1 = "Usman";
    string str2 = "Ali";
    cout<<str1+str2<<endl;
    str1.append(str2);
    cout<<str1<<endl;
}
//append is used to add a string to the end of another string
