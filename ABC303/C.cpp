#include <iostream>
#include <cmath>
#include <map>
using namespace std;
 
#define MAX 200000
 
int main(){
  int n, m, h, k;
  int x[MAX], y[MAX]; // アイテムの場所
  map<int, map<int, bool>> item;
  int x2=0, y2=0;  // 現在地
  int n_cnt = 0;
  char s[MAX];
  cin >> n >> m >> h >> k >> s;
  for(int i=0; i<m; i++){
    cin >> x[i] >> y[i];
	item[x[i]][y[i]] = true; 
  }
  for(int i=0; i<n; i++){
    if(s[i] == 'R') x2++;
    else if(s[i] == 'L') x2--;
    else if(s[i] == 'U') y2++;
    else if(s[i] == 'D') y2--;
    h--, n_cnt++;
    if(h<0){
      cout << "No" << endl;
      return 0;
    }
    if(h<k && item[x2][y2]){
      item[x2][y2] = false;
      h=k;
    }
  }
  cout << "Yes" << endl;
  return 0;
}