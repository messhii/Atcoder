#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main(){
  int N, K, a, b, ans = 0;
  long tablet_cnt = 0;
  vector<pair<int, int>> ab;
 
  cin >> N >> K;  
  for(int i=0; i<N; i++){
	cin >> a >> b;
    ab.push_back(make_pair(a, b));
  }
  sort(ab.rbegin(), ab.rend());
  
  for(auto e: ab){
    tablet_cnt += e.second;
    if(tablet_cnt > K){
      ans = e.first + 1;
      break;
    }
    ans = e.first;
  }
  cout << ans << endl;  
  return 0;
}