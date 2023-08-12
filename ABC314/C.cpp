#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
int main(){
    int n, m, c, tmp;
    char end;
    string s;
    cin >> n >> m >> s;
    string s2 = s;
    vector<vector<int>> q(m);
    for(int i=0; i<n; i++){
        cin >> c;
        q[c-1].push_back(i);
    }
    for(auto e : q){
        int k = e.size();
        for(int i=0; i<k; i++){
            s2[e[(i + 1) % k]] = s[e[i]];
        }
    }
    cout << s2 << endl;
    return 0;
}