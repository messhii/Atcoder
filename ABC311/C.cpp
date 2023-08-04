#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n, a2, i, j;
    cin >> n;
    vector<int> a(n), b;
    for(i=0; i<n; i++) cin >> a[i];

    for(i=0; i<n; i++){
        a2 = a[i];
        b.clear();
        b.push_back(a[i]);
        for(j=1; j<n; j++){
            b.push_back(a[b.back()-1]);
            if(b.front() == b.back()) goto END_LOOP;
        }
    }
    END_LOOP:
    cout << j << endl;
    for(i=0; i<b.size()-1; i++) cout << b[i] << " ";
    return 0;
}