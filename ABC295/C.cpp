#include <iostream>
#include <map>
using namespace std;
 
int main(){
    int n, c, ans = 0;
    map<int, int> cnt;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> c;
        ++cnt[c];
        if(cnt[c] % 2 == 0) ++ans;
    }
    cout << ans << endl;
    return 0;
}