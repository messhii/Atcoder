#include <iostream>
#define MAX 100
using namespace std;
 
int main(){
  int N;
  string A[MAX], B[MAX];
  cin >> N;
  for(int i=0; i<N; i++) cin >> A[i];

  B[0] = A[1].at(0) + A[0].substr(0, N-1);
  for(int i=1; i<N-1; i++){
    B[i] = A[i+1].at(0) + A[i].substr(1, N-2) + A[i-1].at(N-1);
  }
  B[N-1] = A[N-1].substr(1, N-1) + A[N-2].at(N-1);

  for(int i=0; i<N; i++) cout << B[i] << endl;
  return 0;
}