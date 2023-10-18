#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> h(n);
    for(int&e: h) cin >> e;
    int cnt = 0, ans = 0;
    for(int i=0; i<n-1; i++){
        if(h[i] >= h[i+1]) cnt++;
        else cnt = 0;
        ans = ans < cnt ? cnt : ans;
    }
    cout << ans << endl;
    return 0;
}