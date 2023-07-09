#include <iostream>
#define MAX 100
using namespace std;
 
int main(){
  int N, a[MAX][MAX], b[MAX][MAX];
  int a1_cnt_max = 0, a1_0_cnt = 0, a1_90_cnt = 0, a1_180_cnt = 0, a1_270_cnt = 0;
  cin >> N;
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      cin >> a[i][j];
      if(a[i][j] == 1) a1_cnt_max++;
    }
  }
  for(int i=0; i<N; i++) for(int j=0; j<N; j++) cin >> b[i][j];
  
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      if(a[i][j] == 1 && b[i][j] == 1) a1_0_cnt++;
      if(a[N-1-j][i] == 1 && b[i][j] == 1) a1_90_cnt++;      
      if(a[N-1-i][N-1-j] == 1 && b[i][j] == 1) a1_180_cnt++;
      if(a[j][N-1-i] == 1 && b[i][j] == 1) a1_270_cnt++;    
    }
  }
  if(a1_0_cnt == a1_cnt_max || a1_90_cnt == a1_cnt_max || a1_180_cnt == a1_cnt_max || a1_270_cnt == a1_cnt_max){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}