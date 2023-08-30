#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
    int x, y, z;
    string s;
    cin >> x >> y >> z >> s;
    vector<vector<ll>> dp(s.size(), vector<ll>(2));
    if(s[0] == 'a'){
        dp[0][0] = x;
        dp[0][1] = min(x + z, y + z);
    }else{
        dp[0][0] = y;
        dp[0][1] = min(x + z, y + z);
    }
    for(int i=1; i<s.size(); i++){
        if(s[i] == 'a'){
            dp[i][0] = min(dp[i-1][0] + x, dp[i-1][1] + min(x + z, y + z));
            dp[i][1] = min(dp[i-1][0] + min(x + z, y + z), dp[i-1][1] + y);
        }else{
            dp[i][0] = min(dp[i-1][0] + y, dp[i-1][1] + min(x + z, y + z));
            dp[i][1] = min(dp[i-1][0] + min(x + z, y + z), dp[i-1][1] + x);
        }
    }
    cout << min(dp[s.size()-1][0], dp[s.size()-1][1]) << endl;
    return 0;
}