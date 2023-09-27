#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k, o_cnt = 0;
    string s;
    cin >> n >> k >> s;
    for(char& c: s){
        if(o_cnt < k && c == 'o') o_cnt++;
        else c = 'x';
    }
    cout << s << endl;
    return 0;
}