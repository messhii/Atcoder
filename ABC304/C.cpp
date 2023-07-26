#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;
 
int main(){
    int N, D, v, dist;
    cin >> N >> D;
    vector<int> x(N), y(N), infect(N,0);
    queue<int> que; 

    for(int i=0; i<N; i++) cin >> x[i] >> y[i];
    que.push(0);
    infect[0] = 1;

    while(!que.empty()){
        v = que.front();
        que.pop();
        for(int i=1; i<N; i++){
            if(infect[i]) continue;
            dist = pow((x[i]-x[v]),2) + pow((y[i]-y[v]),2);
            if(dist <= pow(D, 2)){
                que.push(i);
                infect[i] = 1;
            }
        }
    }

    for(int i=0; i<N; i++){
        if(infect[i] > 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}