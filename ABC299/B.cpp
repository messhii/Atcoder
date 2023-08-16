#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, t, t1, max = 0;
    cin >> n>> t;
    vector<int> c(n), r(n);
    int flag = 0;
    for(int i=0; i<n; i++){
        cin >> c[i];
        if(i == 0) t1 = c[i];
        if(flag == 0 && c[i] == t) max = i, flag = 1;
    }
    if(!flag) t = t1;
    for(int i=0; i<n; i++){
        cin >> r[i];
        if(c[i] == t && r[max] < r[i]) max = i;
    }    
    cout << max + 1 << endl;
    return 0;
}