#include <iostream>
using namespace std;
 
int main(){
    int n, m, p, ans = 0;
    cin >> n >> m >> p;
    n -= m;
    if(n >= 0) ans = n / p + 1;
    cout << ans << endl;
    return 0;
}