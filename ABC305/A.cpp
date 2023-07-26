#include <iostream>
using namespace std;
 
int main(){
  int N, diff;
  cin >> N;
  diff = N % 5 <= 2 ? -(N % 5) : 5 - (N % 5);
  cout << N + diff << endl;
  return 0;
}