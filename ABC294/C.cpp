#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m, num;
    cin >> n >> m;
    vector<pair<int, char>> c;
    vector<int> a, b;
    for(int i=0; i<n+m; i++){
        cin >> num;
        if(i<n) c.push_back(make_pair(num, 'a'));
        else c.push_back(make_pair(num, 'b'));
    }
    sort(c.begin(), c.end());
    for(int i=0; i<n+m; i++){
        if(c[i].second == 'a') a.push_back(i + 1);
        else b.push_back(i + 1);
    }
    for(int e: a) cout << e << " ";
    cout << endl;
    for(int e: b) cout << e << " ";
    cout << endl;
    return 0;
}