#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n, max = 0;
    string s;
    cin >> n >> s;
    for(int i=0; i<2; i++){
        int cnt = 0;
        for(auto c: s){
            if(c == 'o') cnt++;
            else{
                if(max < cnt) max = cnt;
                cnt = 0;
            }
        }
        if(i == 0) reverse(s.begin(), s.end());
    }
    if(max > 0) cout << max << endl;
    else cout << -1 << endl;
    return 0;
}