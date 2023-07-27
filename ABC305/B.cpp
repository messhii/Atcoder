#include <iostream>
using namespace std;
 
int main(){    
  char p, q;
  int dist[7] = {3, 1, 4, 1, 5, 9};
  int ans = 0;
  cin >> p >> q;
  if(p < q) for(int i=(int)(p-'A'); i<(int)(q-'A'); i++) ans += dist[i];
  else for(int i=(int)(q-'A'); i<(int)(p-'A'); i++) ans += dist[i];
  cout << ans << endl;
  return 0;
}