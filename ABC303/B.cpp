#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
  int n, m, flag, ans=0;
  int a, pos[50][50];
  cin >> n >> m;
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      cin >> a;
      pos[i][a] = j;
    }
  }
  
  for(int j=1; j<=n; j++){
    for(int j2=j+1; j2<=n; j2++){
      flag = 0;
      for(int i=0; i<m; i++){
        if(abs(pos[i][j]-pos[i][j2]) == 1) {
          flag = 1;
          break;
        }
      }
      if(!flag) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}