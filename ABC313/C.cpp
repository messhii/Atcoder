#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n;
    long sum = 0, sum2, ave, ans;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i], sum += a[i];
    ave = sum / n;

    if(sum % 2 == 1){
        sum = 0, sum2 = 0;
        for(int i=0; i<n; i++){
            if(a[i] > ave + 1) sum += (a[i] - (ave + 1));
            if(a[i] < ave) sum2 += (ave - a[i]);
        }
        ans = sum > sum2 ? sum : sum2;
    }else{
        for(int i=0; i<n; i++){
            if(a[i] > ave) ans += (a[i] - ave);
        }
    }
    cout << ans << endl;
    return 0;
}