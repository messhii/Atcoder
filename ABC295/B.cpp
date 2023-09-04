#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int r, c;
    cin >> r >> c;
    vector<string> b(r), b2(r);
    vector<vector<bool>> blasted(r, vector<bool>(c, false));

    for(string& s : b) cin >> s;
    b2 = b;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(!isdigit(b[i][j])) continue;
            int power = b[i][j] - '0';
            for(int i2=0; i2<r; i2++){
                for(int j2=0; j2<c; j2++){
                    if(abs(i - i2) + abs(j - j2) <= power){
                        b2[i2][j2] = '.';
                    }
                }
            }
        }
    }
    for(string s : b2) cout << s << endl;
    return 0;
}