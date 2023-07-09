#include <iostream>
using namespace std;
 
int main(){
  int n, a, b, c;
  cin >> n >> a >> b;
  for(int i=0; i<n; i++){
    cin >> c;
    if(c==a+b){
      cout << i+1;
      return 0;
    }
  }
  return 0;
}