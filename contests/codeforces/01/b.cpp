#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int n, k;

    while(t--){
        cin >> n >> k;
        int s = n/k;

        vector<vector<string>> rows(n);
        vector<vector<string>> rows_r(s);
        for (int i = 0; i < n; i++){
            string s;
            cin >> s;
            rows[i].push_back(s);
        }

        for (int i = 0; i < n;){
            for (int j = 0; j < n;){ 
                if (rows[i][j] == "0"){
                    rows_r[i][j] = '0';
                } else {
                    rows_r[i][j] = '1';
                }
                j += k;
            }
            i += k;
        }

        for (auto u: rows_r){
            cout << u << endl;
        }
    }
}