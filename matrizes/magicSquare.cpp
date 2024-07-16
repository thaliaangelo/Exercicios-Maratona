#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, ans = 0, sum = 0; cin >> n;
    int square[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> square[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        sum += square[i][0];
    }

    ans = sum;

    for (int i = 0; i < n; i++){
        int sup = 0;
        for (int j = 0; j < n; j++){
            sup += square[i][j];
        }

        if (sup != sum) ans = -1;

    }

    for (int j = 0; j < n; j++){
        int sup = 0;
        for (int i = 0; i < n; i++){
            sup += square[i][j];
        }

        if (sup != sum) ans = -1;
    }

    int supdp = 0;
    for (int i = 0; i < n; i++){
        supdp += square[i][i];
    }

    if (supdp != sum) ans = -1;

    int supds = 0;
    for (int i = 0; i < n; i++){
        supds += square[i][n-i-1];
    }

    if (supds != sum) ans = -1;

    cout << ans << endl;
}