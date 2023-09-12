#include <iostream>
#include <vector>
#include <map>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    map<char, vector<int>> mp;
    for(int i=0; i<s.length(); i++) mp[s[i]].push_back(i);
    
    if((mp['B'][0] + mp['B'][1]) % 2 == 1
    && mp['R'][0] < mp['K'][0] && mp['K'][0] < mp['R'][1]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}