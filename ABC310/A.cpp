#include <iostream>
using namespace std;

int main(){
    int n, p, q, d, min_d = 1e5, ans;
    cin >> n >> p >> q;
    for(int i=0; i<n; i++){
        cin >> d;
        min_d = d < min_d ? d : min_d;
    }
    ans = p < (q + min_d) ? p : q + min_d;
    cout << ans << endl;
    return 0;
}