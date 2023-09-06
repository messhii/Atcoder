#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    int ans = 0;
    string s;
    map<int, int> mp;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        mp.clear();
        for(int j=i; j<s.length(); j++){
            mp[s[j]]++;
            int flag = 0;
            for(auto e: mp) if(e.second % 2 != 0) flag =1;
            if(!flag) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}