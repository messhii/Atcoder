#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int m, ans = 1e9;
    vector<string> s(3);
    cin >> m;
    for(auto& e: s) cin >> e; 

    for(int i=0; i<=3*m; i++){
        for(int j=0; j<=3*m; j++){
            for(int k=0; k<=3*m; k++){
                if(s[0][i % m] == s[1][j % m] && s[1][j % m] == s[2][k % m] && i !=j && j!= k && i != k){
                    vector<int> vec = {i, j, k};
                    ans = min(ans, max({i, j, k}));                        
                }
            }
        }
    }
    cout << (ans == 1e9 ? -1 : ans) << endl;
    return 0;
}