#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int m, sum = 0;
    cin >> m;
    vector<int> d(m);
    for(int i=0; i<m; i++){
        cin >> d[i];
        sum += d[i];
    }
    int i = 0;
    int mid = (sum + 1) / 2;
    for(; i<m; i++){
        if(mid > d[i]) mid -= d[i];
        else break;
    }
    cout << i + 1 << " " << mid << endl;
    return 0;
}