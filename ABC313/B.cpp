#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n, m, w, l, ans, cnt = 0;
    cin >> n >> m;
    vector<int> check(n + 1, 0);

    for(int i=0; i<m; i++){
        cin >> w >> l;
        check[l] = 1;
    }
    for(int i=1; i<=n; i++){
        if(!check[i]) ans = i, cnt++;
        if(cnt > 1) break;
    }
    if(cnt == 1) cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}