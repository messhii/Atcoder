#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    int a, b, ans;
    cin >> a >> b;
    ans = pow(a, b) + pow(b, a);
    cout << ans << endl;
    return 0;
}