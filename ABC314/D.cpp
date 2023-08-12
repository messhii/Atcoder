#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main(){
    int n, q, t, x, flag;
    int i2 = 0, t2 = 1;
    char c;
    string s;
    cin >> n >> s >> q;
    vector<int> x2(q);

    for(int i=0; i<q; i++){
        cin >> t >> x >> c;
        x2[i] = x - 1;
        if(t == 1) s[x-1] = c;
        else i2 = i, t2 = t;
    }
    if(t2 == 2){
        for(int i=0; i<n; i++) {
            flag = 0;
            for(int j=i2; j<q; j++){
                if(i == x2[j]) {
                    flag = 1;
                    break;
                }
            }
            if(flag) continue;
            s[i] = tolower(s[i]);
        }
    }
    else if(t2 == 3){
        for(int i=0; i<n; i++) {
            flag = 0;
            for(int j=i2; j<q; j++){
                if(i == x2[j]) {
                    flag = 1;
                    break;
                }
            }
            if(flag) continue;
            s[i] = toupper(s[i]);
        }

    }
    cout << s << endl;
    return 0;
}