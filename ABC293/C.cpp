#include <iostream>
#include <map>
using namespace std;

int h, w;
int a[11][11];
map<int, int> visited;
int ans = 0;

void dfs(int x, int y){
    if(x == w && y == h) ans++;
    if(x+1 <= w && !visited[a[y][x+1]]){
        visited[a[y][x+1]] = 1;
        dfs(x+1, y);
        visited[a[y][x+1]] = 0;
    }
    if(y+1 <= h && !visited[a[y+1][x]]){
        visited[a[y+1][x]] = 1;
        dfs(x, y+1);
        visited[a[y+1][x]] = 0;
    }
    return;
}

int main(){
    cin >> h >> w;
    for(int i=1; i<=h; i++){
        for(int j=1; j<=w; j++){
            cin >> a[i][j];
        }
    }
    visited[a[1][1]] = 1;
    dfs(1, 1);
    cout << ans << endl;
    return 0;
}