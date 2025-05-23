#include <iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    for (int i=0;i<str.length();i++){
        if (i%2==0){
            str[i] = 'a';
        }
    }
    cout<<str<<endl;
}
