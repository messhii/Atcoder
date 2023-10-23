#include <iostream>
using namespace std;

const int INF = 1 << 30;

int main(){
    int n, k, dp[110000], h[110000];
    cin >> n >> k;
    for(int i=1; i<=n; i++) cin >> h[i];

    for(int i=1; i<=n; i++) dp[i] = INF;
    dp[1] = 0;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            dp[i+j] = min(dp[i+j], dp[i] + abs(h[i+j] - h[i]));
        }
    }
    cout << dp[n] << endl;
    return 0;
}