#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    int n, l, r; 
    cin >> n >> l >> r; 
    vector<int> b(n);
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(a > l && a < r) b[i] = a;
        else if(abs(a - l) > abs(a - r)) b[i] = r;
        else b[i] = l;
    }
    for(auto e: b) cout << e << " ";
    cout << endl;
    return 0;
}