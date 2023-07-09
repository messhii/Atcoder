#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
const int N = 8;
int n, m;
string s[N];
int s_idx[N];
 
int main(){  
  int diff;
  int cnt = 0;
  cin >> n >> m;
    
  for(int i=0; i<n; i++){
    cin >> s[i];
    s_idx[i] = i;
  }
  do{
    for(int i=0; i<n-1; i++){
      diff = 0;
      for(int j=0; j<m; j++){
        if(s[s_idx[i]][j] != s[s_idx[i+1]][j]) diff++;
      }
      if(diff == 1) cnt++;
    }
    if(cnt == n-1) {
      cout << "Yes" << endl;
      return 0;
    }else{
      cnt = 0;
    }
  }while(next_permutation(s_idx, s_idx + n));
  cout << "No" << endl;
  return 0;
  
}