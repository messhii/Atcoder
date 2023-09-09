#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    for(int i=0; i<=n; i++){
        char s = '-';
        for(int j=1; j<=9; j++){
            if(n % j == 0){
                if(i % (n / j) == 0) {
                    s = (char)(j + '0');
                    break;
                }
            }
        }    
        cout << s;            
    }
    cout << endl;
    return 0;
}