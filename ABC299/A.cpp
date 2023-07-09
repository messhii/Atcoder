#include <iostream>
using namespace std;
 
int main(){
  int n, flag=0;
  char c;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> c;
    if(flag && c=='|') flag=0;
    else if(c=='|') flag = 1;
    if(flag && c=='*'){
      cout << "in" << endl;;
      return 0;
    }
  }
  cout << "out" << endl;
  return 0;
}