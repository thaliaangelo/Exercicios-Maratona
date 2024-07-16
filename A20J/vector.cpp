#include <bits/stdc++.h>

using namespace std;

int main(){
    int x = 0, y = 0, z = 0;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int xs, ys, zs;
        cin >> xs >> ys >> zs;
        x += xs;
        y += ys;
        z += zs;
    }

    if (x == 0 && y == 0 && z == 0){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}