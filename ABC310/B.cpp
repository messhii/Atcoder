#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m, flag;
    cin >> n >> m;
    vector<int> p(n), c(n);
    vector<vector<int>> f(n, vector<int>(m, 0));

    for(int i=0; i<n; i++){
        cin >> p[i] >> c[i];
        for(int j=0; j<c[i]; j++){
            cin >> f[i][j];   
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j || p[i] < p[j] || c[i] > c[j]) continue;
            // jはiの上位互換
            for(int i2=0; i2<c[i]; i2++){
                flag = 0;
                for(int j2=0; j2<c[j]; j2++){
                    if(f[i][i2] == f[j][j2]){
                        flag = 1;
                        break;
                    }
                }
                if(!flag) break;
            }   
            if(flag && (p[i] > p[j] || c[i] < c[j])){
                cout << "Yes" << endl; 
                return 0;
            }                     
        }
    }
    cout << "No" << endl;
    return 0;

}