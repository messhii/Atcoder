#include <iostream>
using namespace std;

int main(){
    int ans = 1;
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        if(s[i]-'Z' <= 0){
            ans = i + 1;
          //  break;
        }
        cout << isupper(s[i]) << endl;
    }
    cout << ans << endl;
    return 0;
}