#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> g;
vector<bool> visited;

void dfs(int v){
    visited[v] = true;
    for(auto v2: g[v]){
        if(visited[v2]) continue;
        dfs(v2);
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    g.resize(n);
    visited.resize(n);
    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        u--, v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int ans = 0;
    for(int v=0; v<n; v++){
        if(!visited[v]){
            dfs(v);
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}