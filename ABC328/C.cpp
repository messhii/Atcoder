#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, q;
    string s;
    cin >> n >> q >> s;
    vector<int> memo(n+1);
    int cnt = 0;
    for(int i=0; i<n-1; i++){
        if(s[i] == s[i+1]) cnt++;
        memo[i+1] = cnt;
    }
    for(int i=0; i<q; i++){
        int l, r;
        cin >> l >> r;
        if(l == r) cout << 0 << endl;
        else cout << memo[r-1] - memo[l-1] << endl;
    }
    return 0;
}