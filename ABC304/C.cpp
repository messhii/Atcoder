#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
int main(){
    int N, D;
    double d;
    cin >> N >> D;
    vector<int> x(N), y(N), infect(N,0), z, z2;

    for(int i=0; i<N; i++){
        cin >> x[i] >> y[i];
        d = sqrt(pow((x[i]-x[0]),2) + pow((y[i]-y[0]),2));
        if(d <= D) infect[i]++, z.push_back(i);
    }

    while(z.size()){
        z2.clear();
        z2 = z;
        z.clear();
        for(auto& e : z2){
            for(int i=0; i<N; i++){
                d = sqrt(pow((x[i]-x[e]),2) + pow((y[i]-y[e]),2));
                if(d <= D && infect[i] == 0) infect[i]++, z.push_back(i);
            }
        }
    }

    for(int i=0; i<N; i++){
        if(infect[i] > 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}