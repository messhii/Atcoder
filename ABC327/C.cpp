#include <iostream>
#include <map>
using namespace std;

int main(){
    int a[9][9];
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> a[i][j];
        }
    }

    bool visited[10];
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(visited[a[i][j]]){
                cout << "No" << endl;
                return 0;
            }
            visited[a[i][j]] = true;
        }
        for(int k=0; k<10; k++) visited[k] = false;
    }

    for(int j=0; j<9; j++){
        for(int i=0; i<9; i++){
            if(visited[a[i][j]]){
                cout << "No" << endl;
                return 0;
            }
            visited[a[i][j]] = true;
        }
        for(int k=0; k<10; k++) visited[k] = false;
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int i2=3*i; i2<3*i+3; i2++){
                for(int j2=3*j; j2<3*j+3; j2++){
                    if(visited[a[i2][j2]]){
                        cout << "No" << endl;
                        return 0;
                    }
                    visited[a[i2][j2]] = true;
                }
            }
            for(int k=0; k<10; k++) visited[k] = false;
        }
    }

    cout << "Yes" << endl;
    return 0;
}