#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
int main(){
    int H, W, t_cnt = 0;
    cin >> H >> W;
    vector<string> s(H);

    for(int i=0; i<H; i++){
        t_cnt = 0;
        cin >> s[i];
        for(int j=1; j<W; j++){
            if(s[i].at(j-1) == 'T' && s[i].at(j) == 'T'){
                s[i].replace(j-1, 2, "PC");
                t_cnt = 0;
            }
        }
    }
    for(int i=0; i<H; i++) cout << s[i] << endl;
    return 0;
}