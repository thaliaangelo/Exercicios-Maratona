#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int ans = 0;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        if (x <= k) continue;
        else ans++;
    }

    cout << ans << endl;
}