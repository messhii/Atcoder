#include <iostream>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    int flag = 0;
    for(int i=0; i<s.length()-1; i++){
        if(s[i] <= s[i+1]){
            flag = 1;
            break;
        }        
    }
    if(flag) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}