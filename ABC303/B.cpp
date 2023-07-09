#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
  int n, m, flag, res=0;
  int a[50][50], pos[50][50];
  cin >> n >> m;
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      cin >> a[i][j];
      pos[i][a[i][j]] = j;
    }
  }
  
  for(int a2=1; a2<=n; a2++){
    for(int a3=a2+1; a3<=n; a3++){
      flag = 0;
      for(int i=0; i<m; i++){
        if(abs(pos[i][a2]-pos[i][a3]) == 1) {
          flag = 1;
          break;
        }
      }
      if(!flag) res++;
    }
  }
  cout << res << endl;
  return 0;
}