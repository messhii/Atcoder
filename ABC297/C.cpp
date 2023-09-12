#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int H, W;
    cin >> H >> W;
    vector<string> s(H);

    for(int i=0; i<H; i++){
        cin >> s[i];
        for(int j=1; j<W; j++){
            if(s[i][j-1] == 'T' && s[i][j] == 'T'){
                s[i][j-1] = 'P', s[i][j] = 'C';
            }
        }
    }
    for(int i=0; i<H; i++) cout << s[i] << endl;
    return 0;
}