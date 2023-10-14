#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<int, vector<int>> g;
map<int, bool> visited;
int ans = 1;

void dfs(int f){
    visited[f] = true;
    ans = ans < f ? f : ans;
    for(auto f2: g[f]){
        if(visited[f2]) continue;
        dfs(f2);
    }
}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(1);    
    cout << ans << endl;
    return 0;
}