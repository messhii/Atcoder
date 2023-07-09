#include <iostream>
#include <vector>
#include <cstdlib>
 
using namespace std;
 
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; i++) cin >> a.at(i);
  for(auto it=a.begin(); it!=a.end()-1; it++){
    if(abs(*it-*(it+1)) == 1) cout << *it << " ";
    else if(*it < *(it+1)) {
      for(int b=*it; b<*(it+1); b++) cout << b << " ";
    }else{
      for(int b=*it; b>*(it+1); b--) cout << b << " ";
    } 
  }
  cout << *(a.end()-1) << endl;
  return 0;
}