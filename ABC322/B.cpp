#include <iostream>
using namespace std;

int main(){
    int n, m;
    int isPrefix = 1, isSuffix = 1, ans;
    string s, t;
    cin >> n >> m >> s >> t;
    for(int i=0; i<n; i++){
        if(s[i] != t[i]) isPrefix = 0;
        if(s[n-i-1] != t[m-i-1]) isSuffix = 0;
    }
    if(isPrefix && isSuffix) ans = 0;
    else if(isPrefix && !isSuffix) ans = 1;
    else if(!isPrefix && isSuffix) ans = 2;
    else ans = 3;
    cout << ans << endl;
    return 0;
}