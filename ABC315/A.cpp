#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    for(auto e: s){
        if(e != 'a' && e != 'i' && e != 'u' && e != 'e' && e != 'o' ) cout << e;
    }
    cout << endl;
    return 0;
}