#include <iostream>
using namespace std;

int main(){
    string s;
    int n;
    cin >> n >> s;
    for(int i=1; i<n; i++){
        if((s[i] == 'a' && s[i-1] == 'b') || (s[i] == 'b' && s[i-1] == 'a')){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}