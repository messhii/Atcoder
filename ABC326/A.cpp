#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int diff = y - x;
    if(diff <= 2 && diff >= -3) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}