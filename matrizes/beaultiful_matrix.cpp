#include <bits/stdc++.h>

using namespace std;

int main(){
    int ans = 0, matrix[5][5], r, c;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> matrix[i][j];
            if (matrix[i][j] == 1){
                r = i;
                c = j;
            }
        }
    }

    while (r != 2 || c != 2){
        if (r < 2 && c < 2){
            r++;
            c++;
            ans += 2;

        } else if (r < 2 && c > 2){
            r++;
            c--;
            ans += 2;

        } else if (r < 2 && c == 2){
            r++;
            ans++;

        } else if (r > 2 && c > 2){
            r--;
            c--;
            ans+= 2;

        } else if (r > 2 && c < 2){
            r--;
            c++;
            ans += 2;

        } else if (r > 2 && c == 2){
            r--;
            ans++;

        } else if (r == 2 && c > 2){
            c--;
            ans++;

        } else if (r == 2 && c < 2){
            c++;
            ans++;
        }
    }

    cout << ans << endl;

}