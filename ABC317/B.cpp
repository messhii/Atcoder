#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
    int n, ans = 0;
    cin >> n;
    vector<int> a(n);
    for(int& e: a) cin >> e;
    sort(a.begin(), a.end());
    for(int i=0; i<n-1; i++){
        if(a[i+1] - a[i] == 2) {
            cout << a[i] + 1 << endl;
            break;
        }
    }
    return 0;
}