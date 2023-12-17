#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int calc(const string& s, const string& t2){
    for(int i=0; i<(int)t2.size(); i++){
        if(i >= s.size()) return s.size();
        if(s[i] != t2[i]) return i;
    }
    return t2.size();
}

int main(){
    int n;
    string t2;
    cin >> n >> t2;
    vector<string> s(n);
    vector<int> a(n), b(n);
    for(auto& e: s) cin >> e;

    for(int i=0; i<n; i++) a[i] = calc(s[i], t2);
    reverse(t2.begin(), t2.end());
    for(int i=0; i<n; i++){
        reverse(s[i].begin(), s[i].end());
        b[i] = calc(s[i], t2);
    }

    vector<int> ans;
    for(int i=0; i<n; i++){
        bool flag = false;
        if(a[i] == s[i].size() && s[i].size() == t2.size()) flag = true;
        if(a[i] + b[i] >= s[i].size() && s[i].size() + 1 == t2.size()) flag = true;
        if(a[i] + b[i] >= s[i].size() - 1 && s[i].size() - 1 == t2.size()) flag = true;
        if(a[i] + b[i] == s[i].size() - 1 && s[i].size() == t2.size()) flag = true;
        if(flag) ans.push_back(i + 1);
    }
    cout << ans.size() << endl;
    for(auto e: ans) cout << e << " ";
    cout << endl;
    return 0;
}