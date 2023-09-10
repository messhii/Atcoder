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
    sort(a.begin(), a.end());

    int i = 0;
    for(int j=0; j<n; j++){
        while(i < n && a[i] - a[j] < x) i++;
        if(a[i] - a[j] == x){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}