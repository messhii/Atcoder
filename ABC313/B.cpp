#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n, m, w, l, ans, cnt = 0;
    cin >> n >> m;
    vector<int> check(n, 0);

    for(int i=0; i<m; i++){
        cin >> w >> l;
        check[l-1] = 1;
    }
    for(int i=0; i<n; i++){
        if(!check[i]) {
            ans = i + 1;
            cnt++;
        }
        if(cnt > 1){
            cout << -1 << endl;
            return 0;
        }
    }
    cout << ans << endl;
    return 0;
}