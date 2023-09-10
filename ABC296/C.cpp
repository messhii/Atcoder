#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int& e: a) cin >> e;
    if(x >= 0) sort(a.rbegin(), a.rend());
    else sort(a.begin(), a.end());

    int k = 0;
    while(k < n){
        for(int i=k; i<n; i++){
            if(a[k] - a[i] == x){
                cout << "Yes" << endl;
                return 0;
            }else if(abs(a[k] - a[i]) > x){
                break;
            }
        }
        k++;
    }
    cout << "No" << endl;
    return 0;
}