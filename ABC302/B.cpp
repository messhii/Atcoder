#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
int main(){  
  int h, w;
  bool flag = 0;
  char str[6] = "snuke";
  cin >> h >> w;
  vector<string> s(h);
  vector<pair<int, int>> res;
  for(int i=0; i<h; i++) cin >> s[i];
  
  for(int i=0; i<h; i++){
    for(int j=0; j<w; j++){
      for(int x=-1; x<=1; x++){
        for(int y=-1; y<=1; y++){
          int i2 = i, j2 = j;
          res.clear();
          flag = 1;
          for(int k=0; k<5; k++){
            if(i2>=0 && i2<h && j2>=0 && j2 <w){
              if(s.at(i2).at(j2) == str[k]){
                res.push_back(make_pair(i2+1, j2+1));
              }else{
                flag = 0;
              }
              if(!flag) break;
              i2 += x;
              j2 += y;
            }else{
              flag = 0;
            }
 
          }
          if(flag){
            for(auto& p : res){
              cout << p.first << " " << p.second << endl;
            }
            return 0;
          }
        }
      }
    }
  }
  return 0;  
}