#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    int n, q, a, b, c;
    cin >> n >> q;
    vector<vector<int>> cards(n + 1);
    map<int, vector<int>> boxes;
    
    for(int i=0; i<q; i++){
        cin >> a >> b;
        if(a == 1){
            cin >> c;
            cards[c].push_back(b);
            boxes[b].push_back(c);
        }else if(a == 2){
            sort(cards[b].begin(), cards[b].end());
            for(auto e: cards[b]) cout << e << " ";
            cout << endl;
        }else{
            sort(boxes[b].begin(), boxes[b].end());
            boxes[b].erase(unique(boxes[b].begin(), boxes[b].end()), boxes[b].end());
            for(auto e: boxes[b]) cout << e << " ";
            cout << endl;
        }
    }
    return 0;
}