#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int ans = 1;
    string s;
    cin >> s;

    int n = s.length();
    for(int i=0; i<n; i++){
        for(int j=1; j<n-i; j++){
            string s2 = s.substr(i, j+1);
            string s2_rev = s2;
            reverse(s2_rev.begin(), s2_rev.end());
            if(s2 == s2_rev){
                ans = max(ans, (int)s2.length());
            }
        }
    }
    cout << ans << endl;
    return 0;
}