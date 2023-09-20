#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i=1; i<s.length(); i+=2){
        char tmp = s[i-1];
        s[i-1] = s[i];
        s[i] = tmp;
    }
    cout << s << endl;
    return 0;
}