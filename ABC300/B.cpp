#include <iostream>
using namespace std;
 
 
int main(){
  int h, w, flag=0;
  char a[31][31], b[31][31], tmp;
  cin >> h >> w;
  for(int i=0; i<h; i++) for(int j=0; j<w; j++) cin >> a[i][j];
  for(int i=0; i<h; i++) for(int j=0; j<w; j++) cin >> b[i][j];  
  
  for(int i=0; i<h; i++){
    for(int j=0; j<w; j++){
      flag = 0;
      for(int i2=0; i2<h; i2++){
        for(int j2=0; j2<w; j2++){
          if(a[(i+i2) % h][(j+j2) % w]!=b[i2][j2]){
            flag = 1;
            break;
          }
        }
        if(flag) break;
      }
      if(!flag){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}