#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
    int n, a;
    cin >> n;
    vector<int> cnt(n + 1, 0);
    vector<pair<int, int>> f;
    for(int i=0; i<3*n; i++){
        cin >> a;
        cnt[a]++;
        if(cnt[a] == 2) f.push_back(make_pair(i + 1, a));
    }
    sort(f.begin(), f.end());
    for(auto e: f) cout << e.second << " ";
    return 0;
}