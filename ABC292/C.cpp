#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
    int n;
    ll ab, cd, ans = 0;
    cin >> n;
    vector<ll> num(n, 0);

    for(ll x=1; x<n; x++){
        for(ll y=1; x*y < n; y++){
            num[x * y]++;
        }
    }
    for(int i=1; i<n; i++){
        ab = num[i];
        cd = num[n - i];
        ans += ab * cd;
    }
    cout << ans << endl;
    return 0;
}