#include <bits/stdc++.h>

using namespace std;

int t, n, k, w, h;
string s;

void change(char x, int at){
    if (x == 'D' || x == 'U'){
        for (int i = at; i < n; i++){
            if (s[i] == 'D') s[i] == 'U';
            if (s[i] == 'U') s[i] == 'D';
        }
    }

    if (x == 'L' || x == 'R'){
        for (int i = at; i < n; i++){
            if (s[i] == 'L') s[i] = 'R';
            if (s[i] == 'R') s[i] = 'L';
        }
    }
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while(t--){
        cin >> n >> k >> w >> h;
        cin >> s;

        int cont = 0, x = 0, y = 0, i = 0;
        int ans = 0;
        while(cont != k){
            cout << "Valor de x, y e cont: " << x << " " << y << " " << cont << endl;
            if (x == 0 && y == 0) ans++;

            switch(s[i]){
                case 'U':
                    if (x == w){
                        change(s[i], i);
                    } else {
                        i++;
                        x++;
                    }
                break;
                case 'D':
                    if (x == 0){
                        change(s[i], i);
                    } else {
                        i++;
                        x--;
                    }
                break;
                case 'L':
                    if (y == 0){
                        change(s[i], i);
                    } else {
                        i++;
                        y--;
                    }
                break;
                case 'R':
                    if (y == h){
                        change(s[i], i);
                    } else {
                        i++;
                        y++;
                    }
                break;
            }

            if (i == n){ 
                cont++;
                i = 0;
            }
        }

        cout << ans-1 << endl;

        
    }

}