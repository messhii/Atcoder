#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    map<string, bool> check;
    for(int i=0; i<n; i++){
        cin >> s;
        if(check[s] == false){
            check[s] = true;
        }else{
            reverse(s.begin(), s.end());
            if(check[s] == false) check[s] = true;
        }
    }
    for(auto& e : check){
        cout << e << endl;
    }
    cout << check.size() << endl;
    return 0;
}