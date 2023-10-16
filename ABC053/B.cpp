#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int i_a = s.length(), i_z;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'A' && i < i_a) i_a = i;
        else if(s[i] == 'Z') i_z = i;
    }
    cout << i_z - i_a + 1 << endl;
    return 0;
}