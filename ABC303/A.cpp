#include <iostream>
#include <string>
using namespace std;
 
int main(){
  int n;
  string s, t;
  cin >> n >> s >> t;
  for(int i=0; i<n; i++){    
    if(!(s.at(i) == t.at(i)
    || (s.at(i) == 'l' && t.at(i) == '1') || (s.at(i) == '1' && t.at(i) == 'l')
    || (s.at(i) == 'o' && t.at(i) == '0') || (s.at(i) == '0' && t.at(i) == 'o'))){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}