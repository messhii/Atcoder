#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<string> s(k);
    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        if(i < k) s[i] = str;
    }
    sort(s.begin(), s.end());
    for(string x: s) cout << x << endl;
    return 0;
}