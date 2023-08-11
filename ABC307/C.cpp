#include <iostream>
#include <vector>
#include <string>
#define N 10

using namespace std;

int main(){
    int ha, wa, hb, wb, hx, wx;
    int ha_min = N, ha_max = 0, wa_min = N, wa_max = 0, hb_min = N, hb_max = 0, wb_min = N, wb_max = 0, flag;
    cin >> ha >> wa;
    vector<string> a(N+ha);
    string s;

    flag = 0;
    for(int i=N; i<N+ha; i++){
        cin >> s;
        a[i] = ".........." + s;
        for(int j=N; j<N+wa; j++){
            if(a[i][j] == '#'){
                if(!flag) ha_min = i, flag = 1;
                if(j < wa_min) wa_min = j;
                if(j > wa_max) wa_max = j;
                ha_max = i;
            }
        }
    }

    cin >> hb >> wb;    
    vector<string> b(N+hb);
    flag = 0;
    for(int i=N; i<N+hb; i++){
        cin >> s;
        b[i] = ".........." + s;
        for(int j=N; j<N+wb; j++){
            if(b[i][j] == '#'){
                if(!flag) hb_min = i, flag = 1;
                if(j < wb_min) wb_min = j;
                if(j > wb_max) wb_max = j;
                hb_max = i;
            }
        }
    }

    cin >> hx >> wx;
    /*
    cout << "ha_min: " << ha_min << endl;
    cout << "ha_max: " << ha_max << endl;
    cout << "wa_min: " << wa_min << endl;
    cout << "wa_max: " << wa_max << endl;
    cout << "hb_min: " << hb_min << endl;
    cout << "hb_max: " << hb_max << endl;
    cout << "wb_min: " << wb_min << endl;
    cout << "wb_max: " << wb_max << endl;
    cout << "ha_max-ha_min: " << ha_max-ha_min << endl;
    cout << "hb_max-hb_min: " << hb_max-hb_min << endl;
    cout << "wa_max-wa_min: " << wa_max-wa_min << endl;
    cout << "wb_max-wb_min: " << wb_max-wb_min << endl;
    */
    if((ha_max-ha_min) <= hx && (hb_max-hb_min) <= hx && (wa_max-wa_min) <= wx && (wb_max-wb_min) <= wx){
        vector<string> x(hx);
        for(int i=0; i<hx; i++){
            cin >> x[i];
        }

        for(int ia=0; ia<hx-(ha_max-ha_min); ia++){
            for(int ja=0; ja<wx-(wa_max-wa_min); ja++){

                for(int ib=0; ib<hx-(hb_max-hb_min); ib++){
                    for(int jb=0; jb<wx-(wb_max-wb_min); jb++){
                        flag = 0;
                        for(int i=0; i<hx; i++){
                            for(int j=0; j<wx; j++){              
                                if(x[i][j] != a[ha_min-ia][wa_min-ja] && x[i][j] != b[hb_min-ib][wb_min-jb]){
                                    flag = 1;
                                    break;                                    
                                }
                            }
                            if(flag) break;
                        }
                        if(!flag){
                            cout << "Yes" << endl;
                            return 0;
                        }
                    }
                }

            }
        }
    }else{
        cout << "No" << endl;
    }
    return 0;
}