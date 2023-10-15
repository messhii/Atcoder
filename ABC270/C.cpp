#include <iostream>
#include <map>
#include <vector>
using namespace std;

int x, y;
map<int, vector<int>> g;
map<int, bool> visited;
vector<int> ans;
bool stop = false;

void dfs(int v){
    visited[v] = true;
    if(!stop) ans.push_back(v);
    if(v == y) stop = true;
    for(int v_next: g[v]){
        if(visited[v_next]) continue;
        dfs(v_next);
    }
    if(!stop) ans.pop_back();
}

int main(){
    int n;
    cin >> n >> x >> y;
    for(int i=0; i<n-1; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(x);
    for(auto e : ans) cout << e << " ";
    return 0;
}