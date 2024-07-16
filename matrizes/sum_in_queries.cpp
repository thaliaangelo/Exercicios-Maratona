#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, q, ans; cin >> n >> q;
    long long arr[n + 1], pref[n + 1];

    for (int i = 1; i <= n; i++){
        long long x; cin >> x;
        arr[i] = x;
    }

    for (int i = 0; i < (n + 1); i++){
        pref[i] = 0;
    }

    for (int i = 1; i <= n; i++){
        pref[i] = pref[i - 1] + arr[i];
    }

    for (int i = 0; i < q; i++){
        long long a, b; cin >> a >> b;
        ans = pref[b] - pref[a - 1];
        cout << ans << endl;
        ans = 0;
    }

}