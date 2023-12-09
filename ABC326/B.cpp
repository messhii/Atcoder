#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=n; i<=919; i++){
        int c100 = i / 100;
        int c10 = i / 10 % 10;
        int c1 = i % 10;
        if(c100 * c10 == c1){
            cout << i << endl;
            break;
        }
    }
    return 0;
}