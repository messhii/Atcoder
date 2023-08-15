#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int h, w, d;
    cin >> h >> w;
    vector<string> c(h);
    vector<int> s(h < w ? h : w); 
    for(auto& e: c) cin >> e;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(c[i][j] == '#'){
                d = 1;
                while(i-d >= 0 && i+d < h && j-d >= 0 && j+d < w){
                    int cnt = 0;
                    for(int x=-1; x<=1; x++){
                        for(int y=-1; y<=1; y++){
                            if(x==0 || y==0) continue;
                            if(c[i + x*d][j + y*d] == '#') cnt++;
                        }
                    }
                    if(cnt == 4) d++;
                    else break;
                }
                if(d > 1) s[d-2]++;
            }
        }
    }
    for(auto e: s) cout << e << " ";
    return 0;
}