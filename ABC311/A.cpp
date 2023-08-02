#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main(){
    int n, sum = 0;
    string s, comp = "ABC";
    vector<int> flag(comp.length(), 0);

    cin >> n >> s;
    for(int i=0; i<n; i++){
        sum = 0;
        for(int j=0; j<comp.length(); j++){
            if(s[i] == comp[j]) flag[j] = 1;
            sum += flag[j];
        }
        if(sum == 3) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}