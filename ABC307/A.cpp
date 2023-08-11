#include <iostream>
using namespace std;

int main(){
    int n, a, ans = 0;
    cin >> n;
    for(int i=1; i<= 7*n; i++){
        cin >> a;
        ans += a;
        if(i % 7 == 0){
            cout << ans << " ";
            ans = 0;
        }
    }
    return 0;
}