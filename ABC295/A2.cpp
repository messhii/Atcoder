/* vectorとfindを使う方法もある */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> check = {"and", "not", "that", "the", "you"};
int main(){
    int n;
    string w;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> w;
        if(find(check.begin(), check.end(), w) != check.end()){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}