#include <iostream>
#include <map>
using namespace std;

int main(){
    int n, x = 0, y = 0;
    string s;
    cin >> n >> s;
    map<pair<int, int>, bool> visited;
    visited[make_pair(x, y)] = true;
    for(char c: s){
        if(c == 'R') x++;
        else if(c == 'L') x--;
        else if(c == 'U') y++;
        else if(c == 'D') y--;
        if(!visited[make_pair(x, y)]){
            visited[make_pair(x, y)] = true;
        }else{
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}