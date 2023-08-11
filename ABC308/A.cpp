#include <iostream>
using namespace std;
 
int main(){
    int s1 = 0, s2;
    for(int i=0; i<8; i++){
        cin >> s2;
        if(s2 < s1 || s2 < 100 || s2 > 675 || s2 % 25 > 0) {
            cout << "No" << endl;
            return 0;
        }
        s1 = s2;
    }
    cout << "Yes" << endl;
    return 0;
}