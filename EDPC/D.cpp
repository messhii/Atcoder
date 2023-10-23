#include <iostream>
using namespace std;

int main(){
    int N, W;
    int w[110], v[110];
    long long dp[110][100010] = {};

    cin >> N >> W;
    for(int i=1; i<=N; i++) cin >> w[i] >> v[i];
    
    for(int i=1; i<=N; i++){
        for(int j=1; j<=W; j++){
            if(j >= w[i]) {
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[N][W] << endl;
    return 0;
}