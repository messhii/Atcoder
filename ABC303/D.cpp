#include <iostream>
#include <string>
using namespace std;

long long addTime(long long a, long long b, long long c, int cnt, bool* capsLock){
    long long res = 0;
    if(a * cnt < c + (b * cnt)) res += a * cnt;
    else{
        res += c + (b * cnt);
        *capsLock = !(*capsLock);
    }
    return res;
}

int main(){
    long long x, y, z, ans = 0;
    bool capsLook = false;
    string s;
    cin >> x >> y >> z >> s;
    s.push_back('x');
    char state = s[0];
    int cnt = 1;
    for(int i=1; i<s.length(); i++){
        if(state == s[i]) cnt++;
        else{
            if(capsLook == false){
                if(s[i-1] == 'a') ans += addTime(x, y, z, cnt, &capsLook);
                else ans += addTime(y, x, z, cnt, &capsLook);
            }else{
                if(s[i-1] == 'a') ans += addTime(y, x, z, cnt, &capsLook);
                else ans += addTime(x, y, z, cnt, &capsLook);
            }
            state = s[i];
            cnt = 1;
        }
    }
    cout << ans << endl;
    return 0;
}