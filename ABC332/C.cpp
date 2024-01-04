#include <iostream>
using namespace std;

int main(){
    int n, m;
    string s;
    cin >> n >> m >> s;

    int l_cnt = 0, m_cnt = m, ans = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '0'){
            m_cnt = m;
            l_cnt = 0;
        }else if(s[i] == '1' && m_cnt > 0){
            m_cnt--;
        }else{
            l_cnt++;
        }
        ans = max(ans, l_cnt);
    }
    cout << ans << endl;
    return 0;
}