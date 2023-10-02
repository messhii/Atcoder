#include <iostream>
using namespace std;

int main(){
    int n;
    string s;
    char s2[4] = "ABC";
    cin >> n >> s;
    for(int i=0; i<n-2; i++){
        if(s[i] == s2[0] && s[i+1] == s2[1] && s[i+2] == s2[2]){
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}