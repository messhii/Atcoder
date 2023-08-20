#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string N;
    cin >> N;
    int len = N.length();
    if(len >= 4) cout << N.replace(3, len-3, len-3, '0') << endl;
    else cout << N << endl;
    return 0;
}