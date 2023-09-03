#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    int n, d;
    ll p, ans = 0;
    cin >> n >> d >> p;
    vector<ll> f(n);
    for(auto& e : f) cin >> e;
    sort(f.rbegin(), f.rend());
    ll temp;
    for(auto itr=f.begin(); itr<f.end(); itr+=d){
        if(itr+d < f.end()){
            ans += min(p, accumulate(itr, itr+d, (ll)0));
        }else{
            ans += min(p, accumulate(itr, f.end(), (ll)0));
        }
    }
    cout << ans << endl;
    return 0;
}