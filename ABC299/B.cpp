#include <iostream>
#include <vector>
using namespace std;
#define N 200000
int main(){
  long n, t, c, r;
  int c1 = 0, max = 0, flag = 0, res;
  long c_1[N], c_t[N];
  cin >> n >> t;
  for(int i=0; i<n; i++){
    cin >> c;
    if(i==0) c1 = c;
    if(c==c1) c_1[i] = 1;
    else if(c==t){
      c_t[i] = 1;
      flag = 1;
    }
  }
  if(flag){
    for(int i=0; i<n; i++){	
      cin >> r;
      if(c_t[i]){
        if(r>max){
          max = r;
          res = i + 1;
        }
      }
    }
  }else{
    for(int i=0; i<n; i++){	
      cin >> r;
      if(c_1[i]){
        if(r>max){
          max = r;
          res = i + 1;
        }
      }
    }
  }
  cout << res << endl;
  return 0;
}