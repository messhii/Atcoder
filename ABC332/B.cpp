#include <iostream>
using namespace std;

int main(){
    int k, G, M;
    cin >> k >> G >> M;

    int g = 0, m = 0, diff;
    for(int i=0; i<k; i++){
        if(g == G){
            g = 0;
        }else if(m == 0){
            m = M;
        }else{
            diff = min(G - g, m);
            g += diff;
            m -= diff;
        }
    }
    cout << g << " " << m << endl;
    return 0;
}