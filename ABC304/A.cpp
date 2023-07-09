#include <iostream>
#include <string>
using namespace std;
#define MAX 100
 
int main(){
  int N, a[MAX], i=0;
  string s[MAX];
  int min_age=1e9, min_i=0;
  bool check[MAX];
    
  cin >> N;
  for(i=0; i<N; i++){
    cin >> s[i] >> a[i];
	if(a[i] < min_age){
      min_age = a[i];
      min_i = i;
    }
  }
  i = min_i;
  while(!check[i]){
	cout << s[i] << endl;    
	check[i] = true;    
    if(i==N-1) i=0;
    else i++;
  }
  return 0;
}