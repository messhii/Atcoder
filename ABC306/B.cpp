#include <iostream>
#include <cmath>
#define N 64
using namespace std;

int main(){
    int a;
    unsigned long long ans = 0;
    for(int i=0; i<N; i++){
        cin >> a;
        ans += a * (unsigned long long)pow(2, i);
    }    
    cout << ans << endl;
    return 0;
}