#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    int k;
    cin >> k;
    vector<ll> ans;
    for(int bit=2; bit<(1<<10); bit++){
        ll x = 0;
        for(int i=9; i>=0; i--){
            if(bit & (1<<i)){
                x *= 10;
                x += i;
            }
        }
        ans.push_back(x);
    }
    sort(ans.begin(), ans.end());
    cout << ans[k-1] << endl;
    return 0;
}