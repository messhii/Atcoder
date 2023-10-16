#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    for(int& e: p) cin >> e;
    sort(p.rbegin(), p.rend());
    int ans = p[0] / 2;
    for(int i=1; i<n; i++) ans += p[i];
    cout << ans << endl;
    return 0;
}