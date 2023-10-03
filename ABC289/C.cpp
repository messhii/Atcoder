#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    int n, m;
    int c, ans = 0;
    cin >> n >> m;
    vector<vector<int>> a(m);
    for(int i=0; i<m; i++){
        cin >> c;
        a[i].resize(c);
        for(int& x: a[i]) cin >> x;        
    }
    for(int bit=0; bit<(1 << m); bit++){
        set<int> s;
        for(int i=0; i<m; i++){
            if((bit >> i) & 1){
                for(int& x: a[i]) s.insert(x);
            }
        }
        if((int)s.size() == n) ans++;
    }
    cout << ans << endl;
    return 0;
}