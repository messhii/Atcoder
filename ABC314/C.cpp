#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;
 
int main(){
    int n, m, c, tmp;
    char end;
    string s;
    cin >> n >> m >> s;
    vector<stack<int>> q(m);
    for(int i=0; i<n; i++){
        cin >> c;
        q[c-1].push(i);
    }
    for(auto e : q){
        int i = 0;
        while(!e.empty()){
            if(i == 0) end = s[e.top()];
            else s[tmp] = s[e.top()];
            tmp = e.top();
            e.pop();
            i++;
        }
        s[tmp] = end;
    }
    cout << s << endl;
    return 0;
}