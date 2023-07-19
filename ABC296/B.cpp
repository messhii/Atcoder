#include <iostream>
#include <string>
using namespace std;
#define N 8
 
int main(){
    string s;
    int i_ast = 0, j_ast = 0;
    for(int i=0; i<N; i++){
        cin >> s;
        for(int j=0; j<N; j++){
            if(s.at(j) == '*') i_ast = i, j_ast = j;
        }
    }
    cout << (char)('a' + j_ast) << N - i_ast << endl;
    return 0;
}