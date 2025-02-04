#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m; 
    cin >> n;

    vector<ll> v(n+1), pref(n+1), pref_ord(n+1);

    for (int i = 1; i <= n; i++){
        cin >> v[i];
    } 

    pref[0] = 0;
    for (int i = 1; i <= n; i++){
        pref[i] = pref[i - 1] + v[i];
    }

    sort(v.begin(), v.end());

    pref_ord[0] = 0;
    for (int i = 1; i <= n; i++){
        pref_ord[i] = pref_ord[i - 1] + v[i];
    }

    cin >> m;
    for (int i = 0; i < m; i++){
        int type, l, r; cin >> type >> l >> r;
        if (type == 1) cout << pref[r] - pref[l - 1] << endl;
        else cout << pref_ord[r] - pref_ord[l - 1] << endl;
    }
}