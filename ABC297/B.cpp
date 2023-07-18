#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string s;
    int r_flag = 0, k_flag = 0, b_cnt = 0;
    cin >> s;

    for(int i=0; i<s.length(); i++){
        if(s.at(i) == 'B') b_cnt += i + 1;
        if(s.at(i) == 'R') r_flag = !r_flag ? 1 : 0;
        if(s.at(i) == 'K' && r_flag) k_flag = 1;
    }
    if(b_cnt % 2 == 1 && k_flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}