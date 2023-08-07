#include <iostream>
#include <vector>
#include <queue>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector<int> a(n), check(n, 0);
    queue<int> q;
    for(int i=0; i<n; i++){
        cin >> a[i];
        a[i]--;
    }
    int i = 0;
    while(!check[i]){
        check[i] = 1;
        q.push(i);
        i = a[i];
    }
    while(q.front() != i) q.pop();
    cout << q.size() << endl;
    while(!q.empty()){
        cout << q.front() + 1 << " ";
        q.pop();
    }
    return 0;
}