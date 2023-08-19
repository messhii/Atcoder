#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
 
int main(){
    int n, f, s, ans = 0, flag = 0;
    cin >> n;
    vector<pair<int, int>> ice(n);
    for(int i=0; i<n; i++){
        cin >> f >> s;
        ice[i] = make_pair(s, f);
    }
    sort(ice.rbegin(), ice.rend());

    if(ice[0].second == ice[1].second) ans = ice[0].first + ice[1].first / 2;
    ice.erase(unique(ice.begin(), ice.end()), ice.end());
    if(ice.size() > 1){
        for(int i=0; i<ice.size(); i++){
            for(int j=i+1; j<ice.size(); j++){
                if(ice[i].first + ice[j].first > ans){
                    if(ice[i].second == ice[j].second) continue;
                    else{
                        ans = ice[i].first + ice[j].first;
                        flag = 1;
                        break;
                    }
                }else{
                    flag = 1;
                    break;
                }
            }
            if(flag) break;
        }
    }
    cout << ans << endl;
    return 0;
}