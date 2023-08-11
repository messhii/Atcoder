#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
 
int main(){
    int n, a, b;
    cin >> n;
    vector<pair<int, double>> rate(n);
    for(int i=0; i<n; i++){
        cin >> a >> b;
        rate.push_back(make_pair(i + 1, a / (a + b)));
    }
    stable_sort(rate.begin(), rate.end());
    for(auto e : rate) cout << e.first << " ";
    return 0;
}