#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int ans = 0;
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        int cnt = 1, j = 1;
        while(i - j >= 0 && i + j < s.length()){
            if(s[i-j] == s[i+j]) cnt += 2;                
            else break;
            j++;
        }
        int cnt2 = 0, j2 = 0;
        while(i - j2 >= 0 && i + j2 < s.length()){
            if(s[i-j2] == s[i+1+j2]) cnt2 += 2;                
            else break;
            j2++;
        }
        ans = max(ans, max(cnt, cnt2));
    }
    cout << ans << endl;
    return 0;
}