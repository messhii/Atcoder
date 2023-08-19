#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int m, sum = 0, a, b;
    cin >> m;
    vector<int> d(m);
    for(int i=0; i<m; i++){
        cin >> d[i];
        sum += d[i];
    }
    a = 1;
    b = sum / 2 + 1;
    for(auto e: d){
        if(b - e > 0) b -= e, a++;        
        else break;
    }
    cout << a << " " << b << endl;
    return 0;
}