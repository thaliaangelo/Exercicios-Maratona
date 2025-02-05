#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll binary_exp(ll a, ll b, ll n) {
    if (b == 0) return 1;

    ll resp = (binary_exp(a, b/2)) % n;
    if (b % 2 == 0) return (resp * resp) % n;
    else return (resp * resp * a) % n;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int c; cin >> c;
    for (int i = 0; i < c; i++){
        ll x, y, n; cin >> x >> y >> n;
        cout << binary_exp(x, y, n) << endl;
    }

    cin >> c;

}