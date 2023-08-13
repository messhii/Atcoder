#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, int> check = {
    {"and", 1}, {"not", 1}, {"that", 1}, {"the", 1}, {"you", 1}
};
int main(){
    int n;
    string w;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> w;
        if(check[w]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}