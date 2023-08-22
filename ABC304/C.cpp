#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
using namespace std;

int main(){
    int n, d;
    queue<int> q;
    cin >> n >> d;
    vector<bool> infected(n);
    vector<pair<int, int>> pos(n);

    for(auto& [x, y] : pos) cin >> x >> y;
    infected[0] = true, q.push(0);
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int i=0; i<n; i++){
            if(infected[i]) continue;
            int dist = pow(pos[v].first - pos[i].first, 2) + pow(pos[v].second - pos[i].second, 2);
            if(dist <= pow(d, 2)) infected[i] = true, q.push(i);
        }
    }
    for(auto e : infected){
        if(e) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}