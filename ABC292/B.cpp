#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, q, c, x;
    cin >> n >> q;
    vector<int> p(n+1);

    for(int i=0; i<q; i++){
        cin >> c >> x;
        if(c == 1){
            p[x]++;
        }else if(c == 2){
            p[x] += 2;
        }else{
            if(p[x] >= 2) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}