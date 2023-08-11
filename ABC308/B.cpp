#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int n, m, ans = 0;
    cin >> n >> m;
    vector<string> c(n), d(m);
    map<string, int> p;

    for(int i=0; i<n; i++) cin >> c[i];
    for(int i=0; i<m; i++) cin >> d[i];
    cin >> p["other"];
    for(int i=0; i<m; i++) cin >> p[d[i]];
    for(int i=0; i<n; i++) ans += p[c[i]] > 0 ? p[c[i]] : p["other"];
    cout << ans << endl;
    return 0;
}