#include <iostream>
using namespace std;
 
int main(){
  long A, B, ans;
  cin >> A >> B;
  if(A % B != 0) ans = A / B + 1;
  else ans = A / B;
  cout << ans << endl;
}