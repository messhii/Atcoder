#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), a2(n);
    for(auto&e: a) cin >> e;
    a2 = a;
    sort(a2.rbegin(), a2.rend());
    int prev = a2[0];
    long long tmp = 0;
    map<int, long long> mp;
    for(auto e: a2){
        if(e != prev) mp[e] = tmp;
        tmp += e;
        prev = e;
    }
    for(auto e: a) cout << mp[e] << " ";
    cout << endl;
    return 0;
}