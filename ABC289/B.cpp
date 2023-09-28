#include <iostream>
#include <map>
#include <stack>
using namespace std;

int main(){
    int n, m, a;
    map<int, bool> mp;
    stack<int> st; 
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> a;
        mp[a] = true;
    }
    for(int i=1; i<=n; i++){
        st.push(i);
        if(mp[i]) continue;
        while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
        }
    }
    cout << endl;
    return 0;
}