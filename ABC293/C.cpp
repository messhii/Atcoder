#include <iostream>
#include <map>
using namespace std;
#define N 12
int a[N][N];
int h, w;
int ans = 0;
map<int, int> mp;

void dfs(int x, int y){
    if(x == w && y == h){
        ans++;
        return;
    }
    if(x+1 <= w && !mp[a[x+1][y]]){
        mp[a[x+1][y]] = 1;
        dfs(x+1, y);
        mp[a[x+1][y]] = 0;
    }
    if(y+1 <= h && !mp[a[x][y+1]]){
        mp[a[x][y+1]] = 1;
        dfs(x, y+1);
        mp[a[x][y+1]] = 0;
    }
}

int main(){
    cin >> h >> w;
    for(int i=1; i<=w; i++){
        for(int j=1; j<=h; j++){
            cin >> a[i][j];
        }
    }
    mp[a[1][1]] = 1;
    dfs(1, 1);
    cout << ans << endl;
    return 0;
}