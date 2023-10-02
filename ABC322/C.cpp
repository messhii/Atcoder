#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n, m, a;
    cin >> n >> m;
    queue<int> que;
    for(int i=0; i<m; i++){
        cin >> a;
        que.push(a);
    }
    int day;
    for(int i=1; i<=n; i++){
        if(i <= que.front()){
            day = que.front() - i;            
        }else{
            que.pop();
            day = que.front() - i;
        }
        cout << day << endl;
    }
    return 0;
}