#include <iostream>
using namespace std;

typedef long long ll;

const int MAX_N = 110;
const int MAX_V = 100010;
const int INF = 1 << 30;

int main(){
    int N, W;
    ll w[MAX_N], v[MAX_N], dp[MAX_N][MAX_V] = {};

    cin >> N >> W;
    for(int i=1; i<=N; i++) cin >> w[i] >> v[i];

    for(int i=0; i<MAX_N; i++){
        for(int j=0; j<MAX_V; j++){
            dp[i][j] = INF;
        }
    }
    dp[0][0] = 0;

    for(int i=1; i<=N; i++){
        for(int j=0; j<=MAX_V; j++){
            if(j >= v[i]) {
                dp[i][j] = min(dp[i-1][j], dp[i-1][j-v[i]] + w[i]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    ll ans = 0;
    for(int j=0; j<MAX_V; j++){
        if(dp[N][j] <= W) ans = j;
    }
    cout << ans << endl;
    return 0;
}