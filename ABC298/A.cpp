#include <iostream>
using namespace std;
 
int main(){
	int N, cnt = 0;
    char c;
    cin >> N;
    for(int i=0; i<N; i++){
		cin >> c;
		if(c == 'x') break;
        else if(c == '-') cnt++;
    }
 	if(cnt == N || c == 'x') cout << "No" << endl;
    else cout << "Yes" << endl;  
    return 0;
}