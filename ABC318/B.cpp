#include <iostream>
#include <vector>
#define MAX 100
using namespace std;
 
int main(){
    int n, x1, x2, y1, y2, s = 0;
    int floor[MAX][MAX] = {};
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> x1 >> x2 >> y1 >> y2;
        for(int y=y1; y<y2; y++){
            for(int x=x1; x<x2; x++){
                if(!floor[x][y]) floor[x][y] = 1, s++;
            }
        }
    }
    cout << s << endl;
    return 0;
}