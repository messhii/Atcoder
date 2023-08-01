#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main(){
  int n, m, flag;
  cin >> n >> m;
  vector<string> s(n);
  
  for(int i=0; i<n; i++) cin >> s[i];

  for(int i=0; i<n-8; i++){
    for(int j=0; j<m-8; j++){
        flag = 0;
        // 「#」のチェック
        for(int i2=0; i2<3; i2++){
            for(int j2=0; j2<3; j2++){
                if(s[i+i2][j+j2] != '#') flag = 1;
                if(s[i+i2+6][j+j2+6] != '#') flag = 1;
            }
            if(flag) break;
        }
        // 「.」のチェック
        for(int k=0; k<4; k++){
            if(s[i+3][j+3-k] != '.') flag = 1;
            if(s[i+3-k][j+3] != '.') flag = 1;
            if(s[i+5][j+k+5] != '.') flag = 1;
            if(s[i+k+5][j+5] != '.') flag = 1;
        }
      if(!flag) cout << i+1 << " " << j+1 << endl;
      
    }
  }
  return 0;
}