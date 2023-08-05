#include <iostream>
using namespace std;
 
int main(){
    int n, p1, p2, p_max = 0;
    cin >> n >> p1;
    for(int i=0; i<n-1; i++){
        cin >> p2;
        p_max = p2 > p_max ? p2 : p_max;
    }
    if(p1 > p_max) cout << 0 << endl;
    else cout << p_max - p1 + 1 << endl;
    return 0;
}