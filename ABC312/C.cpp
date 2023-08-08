#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
 
int main(){
  int n, m, a, b, x;
  vector<pair<int, int>> vec;
  cin >> n >> m;
  int a_cnt = 0, b_cnt = m;
  
  for(int i=0; i<n; i++){
    cin >> a;
    vec.push_back(make_pair(a, 0));
  }
  for(int i=0; i<m; i++){
    cin >> b;
    vec.push_back(make_pair(b + 1, 1));
  }
  sort(vec.begin(), vec.end());
  for(auto& e: vec){
    if(e.second == 0){
        a_cnt++;
        x = e.first;
    }else{
        b_cnt--;
        x = e.first;
    }
    if(a_cnt >= b_cnt) break;
  }
  cout << x << endl;
  return 0;
}