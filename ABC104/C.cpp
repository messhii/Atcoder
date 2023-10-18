#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> h(n), dp(n);
    for(int&e: h) cin >> e;
    int cnt = 0, ans = 0;
    for(int i=1; i<n; i++){
        if(h[i] <= h[i-1]) dp[i] = dp[i-1] + 1;
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
    return 0;
}