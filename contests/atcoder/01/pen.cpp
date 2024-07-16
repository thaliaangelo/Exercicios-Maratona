#include <bits/stdc++.h>

using namespace std;

int main(){
    int r, g, b, ans; cin >> r >> g >> b;
    string name; cin >> name;
    char x = name[0];

    switch(x){
        case 'R':
            if (g < b) ans = g;
            else ans = b;
            break;

        case 'B':
            if (r < g) ans = r;
            else ans = g;
            break;

        case 'G':
            if (r < b) ans = r;
            else ans = b;
            break;

    }

    cout << ans << endl;
}