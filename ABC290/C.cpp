#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int& e: a) cin >> e;
    sort(a.begin(), a.end());
    int m = 0;
    for(int i=0; i<n; i++){
        if(a[i] == m) m++;
        if(m == k) break;
    }
    cout << m << endl;
    return 0;
}