#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

typedef long long int ll;
#define INF 1e18

int main(){
    int n, z_sum = 0;
    cin >> n;
    vector<int> x(n + 1), y(n + 1), z(n + 1);
    for(int i=1; i<=n; ++i){
        cin >> x[i] >> y[i] >> z[i];
        z_sum += z[i];
    }
    vector<vector<ll>> dp(n+1, vector<ll>(z_sum+1, INF));

    dp[0][0] = 0;
    for(int i=0; i<=n; i++) dp[i][0] = 0;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=z_sum; j++){
            int w;
            if(x[i] > y[i]) w = 0;
            else w = (y[i] - x[i]) / 2 + 1; // w, z[i]を使う
            if(j >= z[i]){
                dp[i][j] = min(dp[i-1][j-z[i]]+w, dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    ll ans = INF;
    for(int j= z_sum / 2 + 1; j <= z_sum; ++j){
        ans = min(ans, dp[n][j]);
    }
    cout << ans << endl;
    return 0;
}