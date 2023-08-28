#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int n, m;
int d[15][15], ans = 0;
bool visited[15];

void dfs(int x, int sum){
    ans = max(ans, sum);
    visited[x] = true;
    for(int i=1; i<=n; i++){
        if(!visited[i] && d[x][i]) dfs(i, sum + d[x][i]);
    }
    visited[x] = false;
}

int main(){
    int a, b, c;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> a >> b >> c;
        d[a][b] = d[b][a] = c;
    }
    for(int i=1; i<=n; i++){
        dfs(i, 0);
    }
    cout << ans << endl;
    return 0;
}