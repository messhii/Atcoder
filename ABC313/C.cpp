#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n;
    long sum = 0, ans = 0, ans2 = 0, ave, ave2;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i], sum += a[i];
    ave = sum / n;
    ave2 = sum % n > 0 ? ave + 1 : ave;    


    for(int i=0; i<n; i++){
        if(ave > a[i]) ans += ave - a[i];
        else if(ave2 < a[i]) ans2 += a[i] - ave2;
    }
    cout << (ans > ans2 ? ans : ans2)  << endl;
    return 0;
}