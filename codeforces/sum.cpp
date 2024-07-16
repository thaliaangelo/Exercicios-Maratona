#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int ans = 0;

    for (int i = 0; i < n; i++){
        int a, b, c, d; cin >> a >> b >> c >> d;
        if (a < b) ans++;
        if (a < c) ans++;
        if (a < d) ans++;
        cout << ans << endl;
        ans = 0;
    }
}