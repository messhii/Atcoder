#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define MAX 100
 
int main(){
  int N, min_i=0;
  cin >> N;
  vector<int> a(N);
  vector<string> s(N);

  for(int i=0; i<N; i++){
    cin >> s[i] >> a[i];
	  if(a[i] < a[min_i]) min_i = i;
  }
  for(int i=min_i; i<min_i+N; i++){
    cout << s[i%N] << endl;
  }
  return 0;
}