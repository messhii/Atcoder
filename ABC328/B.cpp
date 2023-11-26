#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i=1; i<=n; i++){
        int one = i % 10;
        int ten = i / 10;
        int d;
        cin >> d;
        if(i >= 10 && ten != one) continue;
        for(int j=1; j<=d; j++){
            if(j == one || j == 10 * one + one || j == 100 * one + 10 * one + one){
                ans++;
            }
         }            
    }
    cout << ans << endl;
    return 0;
}