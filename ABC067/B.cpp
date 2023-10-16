#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, k, ans = 0;
    cin >> n >> k;
    vector<int> l(n);
    for(int&e: l) cin >> e;
    sort(l.rbegin(), l.rend());
    for(int i=0; i<k; i++) ans += l[i];
    cout << ans << endl;
    return 0;
}