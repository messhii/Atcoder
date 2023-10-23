#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, x[100010][3], dp[100010][3] = {};
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<3; j++){
            cin >> x[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                if(j != k){
                    dp[i][k] = max(dp[i][k], dp[i-1][j] + x[i][k]);
                }
            }
        }
    }
    cout << max({dp[n][0], dp[n][1], dp[n][2]}) << endl;
    return 0;
}