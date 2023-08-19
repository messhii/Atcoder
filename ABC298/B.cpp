#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, cnt_ans = 0, cnt[4] = {0};
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n)), b(n, vector<int>(n));

    for(auto& e: a)for(auto& e2: e) cin >> e2;   
    for(auto& e: b)for(auto& e2: e) cin >> e2;    

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j] == 1) cnt_ans++; 
            if(a[i][j] == 1 && b[i][j] == 1) cnt[0]++;
            if(a[n-1-j][i] == 1 && b[i][j] == 1) cnt[1]++;
            if(a[n-1-i][n-1-j] == 1 && b[i][j] == 1) cnt[2]++;
            if(a[j][n-1-i] == 1 && b[i][j] == 1) cnt[3]++;
        }
    }
    for(int i=0; i<4; i++){
        if(cnt[i] == cnt_ans){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}