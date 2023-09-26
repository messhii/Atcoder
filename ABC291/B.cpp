#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    double sum = 0;
    cin >> n;
    vector<int> x(5 * n);
    for(int& e: x) cin >> e;
    sort(x.begin(), x.end());
    for(int i=n; i<x.size()-n; i++) sum += x[i];
    cout << sum / (3 * n) << endl;
    return 0;
}