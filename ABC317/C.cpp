#include <iostream>
#include <vector>
#include <queue>
using namespace std;
 
int main(){
    int n, m;
    queue<int> q;
    cin >> n >> m;
    
    vector<int> detected(n);
    for(int i=0; i<n; i++){
        detected[i] = true;
        q.push(i);
        while(!q.empty()){
            int c = q.front();
            q.pop();
            for(int i=0; i<n; i++){
                
            }
        }
    }
    return 0;
}