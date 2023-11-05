#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

int main(){
    ll b;
    cin >> b;

    for(int a=1; a<=15; a++){
        ll x = 1;
        for(int i=0; i<a; i++) x *= a;
        if(x == b) {
            cout << a << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}