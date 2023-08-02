#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main(){
    int n, d;
    int cnt_free = 0, ans = 0;
    cin >> n >> d;
    vector<string> s(n);
    vector<int> cnt(d, 0);
    for(int i=0; i<n; i++){
        cin >> s[i];
        for(int j=0; j<d; j++){
            if(s[i][j] == 'o') cnt[j]++;
        }
    }
    for(int j=0; j<d; j++){
        if(cnt[j] == n) cnt_free++;
        else cnt_free = 0;
        if(cnt_free > ans) ans = cnt_free;
    }
    cout << ans << endl;
    return 0;
}