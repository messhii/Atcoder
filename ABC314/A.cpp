#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string S = "1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    int n;
    cin >> n;
    cout << "3." << S.substr(0, n) << endl;
    return 0;
}