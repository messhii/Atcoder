#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
int main(){    
    int h, w;
    int flag = 0, cnt = 0, ans_i = 0, ans_j = 0;
    cin >> h >> w;
    vector<string> s(h);

    for(int i=0; i<h; i++) cin >> s[i];

    for(int i=0; i<h-1; i++){
        cnt = 0, flag = 0;
        for(int j=0; j<w; j++){
            if(s[i][j] != s[i+1][j]){
                cnt++;
                cout << "i " << i << " j " << j << endl;
                if(cnt > 1) break;
                if(!flag && s[i][j] == '.'){
                    ans_i = i;
                    ans_j = j;
                    flag = 1;
                }
            }
        }
    }
    cout << ans_i + 1 << " " << ans_j + 1 << endl;
    return 0;
}