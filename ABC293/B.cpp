#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, a;
    cin >> n;
    vector<bool> called(n, false);
    vector<int> ans;

    for(int i=0; i<n; i++){
        cin >> a;
        if(called[i]) continue;
        called[a-1] = true;
    }
    for(int i=0; i<n; i++){
        if(!called[i]) ans.push_back(i+1);
    }
    cout << ans.size() << endl;
    for(int e: ans) cout << e << " ";
    cout << endl;
    return 0;
}