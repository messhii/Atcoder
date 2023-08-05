#include <iostream>
#include <vector>
#include <queue>
using namespace std;
 
int main(){
    int n, m, a, b, a1, next;
    cin >> n >> m;

    vector<queue<int>> q(n+1);
    vector<int> win(n+1, 0);
    queue<int> q2;

    for(int i=0; i<m; i++){
        cin >> a >> b;
        if(i == 0) a1 = a;
        q[a].push(b);
    }
    q2 = q[a1];
    while(!q2.empty()){
        next = q2.front();
        q2.pop();
        win[next] = 1;
        if(!q[next].empty()) q2 = q[next];
    }
    for(int i=1; i<=n; i++){
        if(i != a1 && win[i] == 0){
            cout << -1 << endl;
            return 0;
        }
    }
    cout << a1 << endl;
    return 0;
}