#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
 
int main(){
    int n, f, s, ans = 0, tmp;
    cin >> n;
    vector<pair<int, int>> ice(n);
    for(auto& [s, f]: ice) cin >> f >> s;
    sort(ice.rbegin(), ice.rend());
    for(int i=1; i<n; i++){
        if(ice[0].second == ice[i].second){
            tmp = ice[0].first + ice[i].first / 2;
        }else{
            tmp = ice[0].first + ice[i].first;
        }
        if(ans < tmp) ans = tmp;
    }
    cout << ans << endl;
    return 0;
}