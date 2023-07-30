#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main(){
  int n, m, flag;
  cin >> n >> m;
  vector<string> s(n);
  
  for(int i=0; i<n; i++) cin >> s[i];
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(j+9 > m || i+9 > n) break;
      flag = 0;
      for(int i2=0; i2<9; i2++){
        for(int j2=0; j2<9; j2++){
          if((i2<3 && j2<3) || (i2>5 && j2>5)){
            if(s[i+i2][j+j2] != '#'){
              flag = 1;
              break;
            }
          }
          if((i2<3 && j2==3) || (i2==3 && j2<4) || (i2>4 && j2==5) || (i2==5 && j2>4)){
            if(s[i+i2][j+j2] != '.'){
              flag = 1;
              break;
            }
          }
        }
        if(flag) break;
      }
      if(!flag) cout << i+1 << " " << j+1 << endl;
    }
  }
  return 0;
}