#include <iostream>
using namespace std;
 
int main(){
    int n, h, x, p, i;
    cin >> n >> h >> x;
    for(i=0; i<n; i++){
        cin >> p;
        if(p >= x - h) break;
    }
    cout << i + 1 << endl;
    return 0;
}