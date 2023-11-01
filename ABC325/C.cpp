#include <iostream>
using namespace std;

int h, w;
char g[1010][1010];
bool visited[1010][1010];

void dfs(int x, int y){
    visited[x][y] = true;
    for(int i=-1; i<=1; i++){
        for(int j=-1; j<=1; j++){
            if(!visited[x + i][y + j] && g[x + i][y + j] == '#'){
                dfs(x + i, y + j);
            }
        }
    }
}

int main(){
    int ans = 0;
    cin >> h >> w;
    for(int i=1; i<=h; i++){
        for(int j=1; j<=w; j++){
            cin >> g[i][j];
        }
    }
    for(int i=1; i<=h; i++){
        for(int j=1; j<=w; j++){
            if(!visited[i][j] && g[i][j] == '#'){
                dfs(i, j);
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}