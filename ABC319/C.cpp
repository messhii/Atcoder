#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    int row[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8},
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8},
        {0, 4, 8}, {2, 4, 6}
    };
    int cells[9], order[9];
    int disappoint_cnt = 0, all = 0;
    for(int i=0; i<9; i++) cin >> cells[i], order[i] = i;

    do {
        all++;
        for(int i=0; i<8; i++){
            if((cells[row[i][0]] == cells[row[i][1]] && order[row[i][0]] < order[row[i][2]] && order[row[i][1]] < order[row[i][2]])
            || (cells[row[i][0]] == cells[row[i][2]] && order[row[i][0]] < order[row[i][1]] && order[row[i][2]] < order[row[i][1]])
            || (cells[row[i][1]] == cells[row[i][2]] && order[row[i][1]] < order[row[i][0]] && order[row[i][2]] < order[row[i][0]])
            ){
                disappoint_cnt++;
                break;
            }       
        }
    } while(next_permutation(order, order + 9));
    cout << fixed << setprecision(10) << (double)(all - disappoint_cnt) / all << endl;
    return 0;
}