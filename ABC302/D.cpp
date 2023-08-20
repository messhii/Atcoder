#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main(){
    int n, m;
    long long d, x, y;
    cin >> n >> m >> d;
    vector<long long> a(n), b(m);
    for(auto& e : a) cin >> e;
    for(auto& e : b) cin >> e;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    while(a.size() > 0 && b.size() > 0){
        x = a.back(), y = b.back();
        if(abs(x - y) <= d){
            cout << x + y << endl;
            return 0;
        }
        if(x > y) a.pop_back();
        else b.pop_back();
    }
    cout << -1 << endl;
    return 0;
}