#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
int main(){    
    int h, w;
    int cnt = 0, cnt2 = 0, ans_i = 0, comp_i = 0;
    cin >> h >> w;
    vector<string> s(h);

    for(int i=0; i<h; i++) cin >> s[i];

    for(int i=0; i<h; i++){
        cnt = cnt2;
        cnt2 = 0;
        for(int j=0; j<w; j++){
            if(s[i][j] == '#') cnt2++;
        }
        if(cnt > 0 && cnt2 > 0 && abs(cnt-cnt2) == 1){
            ans_i = cnt < cnt2 ? i - 1 : i;
            comp_i = cnt < cnt2 ? i : i - 1;
        }
        
    }
    for(int j=0; j<w; j++){
        if(s[ans_i][j] != s[comp_i][j]){
            cout << ans_i + 1 << " " << j + 1 << endl;
            break;
        }
    }
    return 0;
}