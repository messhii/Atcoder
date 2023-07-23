#include <iostream>
#include <string>
#define N 8
using namespace std;
 
int main(){
    string s;
    for(int i=N; i>0; i--){
        cin >> s;
        for(int j=0; j<N; j++){
            if(s.at(j) == '*'){
                cout << (char)('a' + j) << i << endl;
                return 0;
            }
        }
    }
    return 0;}