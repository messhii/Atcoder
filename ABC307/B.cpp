#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    string s2, s2r;
    cin >> n;
    vector<string> s(n);
    for(int i=0; i<n; i++) cin >> s[i];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j) continue;
            s2 = s[i] + s[j];
            s2r = s2;
            reverse(s2r.begin(), s2r.end());
            if(s2 == s2r){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}