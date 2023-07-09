#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
  int n, win_cnt;
  string s;
  int t_cnt = 0, a_cnt = 0;
  char res;
  cin >> n;
  cin >> s;
  win_cnt = n % 2 == 0 ? n / 2 : n / 2 + 1;
  
  for(int i=0; i<n; i++){
    if(s.at(i) == 'T') t_cnt++;
    else a_cnt++;
	if(t_cnt == win_cnt){
      res = 'T';
      break;
    }else if(a_cnt == win_cnt){
      res = 'A';
      break;
    }
  }
  cout << res << endl;
  return 0;
}