#include <iostream>
using namespace std;
 
int main(){
  int N, D;
  int preTime = 0, curTime = 0;
  cin >> N >> D;

  for(int i=0; i<N; i++){
    cin >> curTime;
    if(i > 0 && curTime - preTime <= D) {
        cout << curTime << endl;
        return 0;
    }
    preTime = curTime;
  }
  cout << -1 << endl;
  return 0;
}