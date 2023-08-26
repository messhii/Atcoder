#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
    int n, x, y, z;
    int z1 = 0, z2 = 0;
    long long ans = 0, min = LLONG_MAX;
    cin >> n;
    vector<pair<int, int>> p;
    for(int i=0; i<n; i++){
        cin >> x >> y >> z;
        if(x > y) z1 += z;
        else{
            z2 += z;
            p.push_back(make_pair((y - x)/2 + 1, z));
        }
    }
    if(z1 < z2){
        sort(p.begin(), p.end());
        for(int i=0; i<p.size(); i++){
            long long temp = 0;
            z = 0;
            for(int j=i; j<p.size(); j++){
                temp += p[j].first;
                z += p[j].second;
                if(z1 + z > z2 - z){
                    if(min > temp) min = temp;
                    break;
                }
            }
        }
        ans = min;
    }
    cout << ans << endl;
    return 0;
}