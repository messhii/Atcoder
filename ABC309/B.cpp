#include <iostream>
#define MAX 100
using namespace std;
 
int main(){
  int N;
  char a[MAX][MAX];
  cin >> N;
  for(int i=0; i<N; i++) for(int j=0; j<N; j++) cin >> a[i][j];
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      if(i == 0){
        if(j == 0) cout << a[1][0];
        else cout << a[i][j-1];
      }else if(i == N-1){
        if(j == N-1) cout << a[N-2][N-1];
        else cout << a[i][j+1];
      }else if(j == 0){
        cout << a[i+1][j];
      }else if(j == N-1){
        cout << a[i-1][j];
      }else{
        cout << a[i][j];
      }
    }
    cout << endl;
  }
  return 0;
}