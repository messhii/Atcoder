#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
 
int main(){
    int n, a, b;
    cin >> n;
    vector<pair<long double, int>> rate(n);
    for(int i=0; i<n; i++){
        cin >> a >> b;
        rate[i] = make_pair((long double)b / (a + b), i + 1);
    }
    stable_sort(rate.begin(), rate.end());
    for(auto e : rate) cout << e.second << " ";
    return 0;
}