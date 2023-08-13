#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#define N 40
using namespace std;

int main(){
    int r, c;
    string initial(N, '.');
    vector<string> floor(N, initial), floor2(N, initial);
    string str;
    cin >> r >> c;
    for(int i=10; i<r+10; i++){
        cin >> str;
        floor[i].replace(10, c, str);
    }
    floor2 = floor;
    for(int i=10; i<r+10; i++){
        for(int j=10; j<c+10; j++){
            if(floor2[i][j] != '.' && floor2[i][j] != '#'){
                int k = floor2[i][j] - '0';
                for(int i2=-k; i2<=k; i2++){
                    for(int j2=-k; j2<=k; j2++){
                        if(abs(i2) + abs(j2) <= k){
                            floor[i+i2][j+j2] = '.';
                        }
                    }
                }
            }
        }
    }
    for(int i=10; i<r+10; i++){
        cout << floor[i].substr(10, c) << endl;
    } 
    return 0;
}