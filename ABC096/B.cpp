#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n[3], k;
    int ans = 0, i_max = 0;
    for(int i=0; i<3; i++) {
        cin >> n[i];
        if(i > 0 && n[i] > n[i-1]) i_max = i;
    }
    cin >> k;
    for(int i=0; i<3; i++){
        if(i == i_max){
            ans += n[i] * pow(2, k);
        }else{
            ans += n[i];
        }
    }
    cout << ans << endl;
}