#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;
 
int main(){
    int n, q, t, x;
    char c;
    string s;
    cin >> n >> s >> q;
    vector<int> x2(q);
    vector<char> c2(q);
    pair<int, int> end_type(0, 0);
    for(int i=0; i<q; i++){
        cin >> t >> x >> c;
        x2[i] = x - 1;
        c2[i] = c;
        if(t == 1) s[x2[i]] = c2[i];
        else if(t == 2 || t == 3) end_type = make_pair(i, t);
    }
    if(end_type.first > 0){
        if(end_type.second == 2) for(int i=0; i<n; i++) s[i] = tolower(s[i]);
        else for(int i=0; i<n; i++) s[i] = toupper(s[i]);
        for(int i=end_type.first + 1; i<q; i++) s[x2[i]] = c2[i];
    }
    cout << s << endl;
    return 0;
}