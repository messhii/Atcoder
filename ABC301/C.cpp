#include <iostream>
#include <string>
#include <map>
#include <cmath>
using namespace std;
 
 
int main(){
  string s, t;
  map<char, int> cnts;  
  map<char, int> cntt;  
  map<char, bool> c;
  int sums = 0, sumt = 0;
  string str = "atcoder";
  cin >> s >> t;
  
  for(auto& x : s) cnts[x]++;
  for(auto& x : t) cntt[x]++;
  
  for(auto& x : s){
    if(x != '@'){
      if(cnts[x]-cntt[x]!=0 && str.find(x)==string::npos){
        cout << "No" << endl;
        return 0;
      }else if(!c[x]){
        sums += abs(cnts[x]-cntt[x]);
        c[x] = true;
      }
    }
  }
  c.clear();
  for(auto& x : t){
    if(x != '@'){
      if(cntt[x]-cnts[x]!=0 && str.find(x)==string::npos){
        cout << "No" << endl;
        return 0;      
      }else if(!c[x]){
        sumt += abs(cntt[x]-cnts[x]);
        c[x] = true;
      }
    }
  }
  /*
  cout << sums << endl;
  cout << sumt << endl;
  cout << cnts['@'] << endl;
  cout << cntt['@'] << endl;
*/  
  if(sums<=cntt['@'] || sumt<=cnts['@']) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}