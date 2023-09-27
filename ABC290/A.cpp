#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int& e: a) cin >> e;
    int b, ans = 0;
    for(int i=0; i<m; i++){
        cin >> b;
        ans += a[b-1];
    }
    cout << ans << endl;
    return 0;
}