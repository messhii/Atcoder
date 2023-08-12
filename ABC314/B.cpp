#include <iostream>
#include <vector>
#include <map>
using namespace std;
 
int main(){
    int n, c, a, x, k = 0, min = 37;
    cin >> n;
    vector<map<int, int>> aa(n);
    vector<int> ans;
    for(int i=0; i<n; i++){
        cin >> c;
        for(int j=0; j<c; j++){
            cin >> a;
            aa[i][a] = 1;
        }
    }
    cin >> x;
    for(int i=0; i<n; i++){
        if(aa[i][x] == 1 && aa[i].size() < min){
            min = aa[i].size();
        }
    }    
    for(int i=0; i<n; i++){
        if(aa[i][x] == 1 && aa[i].size() == min){
            ans.push_back(i + 1);
            k++;
        }
    }
    cout << k << endl;
    for(int e : ans) cout << e << " ";
    return 0;
}