#include <iostream>
#include <string>
using namespace std;
 
int main(){
  string ans[7] = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD" };
  string str;
  cin >> str;
  for(int i=0; i<7; i++){
    if(str == ans[i]) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}