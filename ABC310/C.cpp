#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    int n;
    string s1, s2;
    cin >> n;
    map<string, bool> check;
    for(int i=0; i<n; i++){
        cin >> s1;
        s2 = s1;
        reverse(s2.begin(), s2.end());
        if(check.find(s2) == check.end()) check[s1] = true;
    }
    cout << check.size() << endl;
    return 0;
}