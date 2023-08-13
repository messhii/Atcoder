#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main(){
  int n, m, h, k, x, y;
  string s;
  cin >> n >> m >> h >> k >> s;
  map<int, int> item;

  for(int i=0; i<m; i++){
    cin >> x >> y;
    item[x] = y;
  }
  x = 0, y = 0;
  for(int i=0; i<n; i++){
    h--;
    if(h<0){
      cout << "No" << endl;
      return 0;
    }
    if(s[i] == 'R') x++;
    else if(s[i] == 'L') x--;
    else if(s[i] == 'U') y++;
    else if(s[i] == 'D') y--;
    if(h < k && item[x] == y){
      h = k;
      item.erase(x);
    }
  }
  cout << "Yes" << endl;
  return 0;
}