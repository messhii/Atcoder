#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(char& c : s){
        if(c == '0') c = '1';
        else c = '0';
    }
    cout << s << endl;
    return 0;
}