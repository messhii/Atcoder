#include <iostream>
#include <string>
using namespace std;
 
int main(){
    int N, flag = 0;
    string s;
    cin >> N >> s;
    for(int i=1; i<N; i++){
        if(s.at(i) == s.at(i-1)){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}