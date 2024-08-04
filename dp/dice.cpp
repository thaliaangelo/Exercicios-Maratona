#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll MOD = 1e9+7;
ll n;
ll memo[11234567];

ll solve(ll x){
    if (x <= 0) return 0;

    ll& solvem = memo[x];
    if (solvem != -1) return solvem;
    if (x >= 1 && x <= 6) return solvem = (1+solve(x-1)+solve(x-2)+solve(x-3)+solve(x-4)+solve(x-5)+solve(x-6)) % MOD;
    return solvem = (solve(x-1)+solve(x-2)+solve(x-3)+solve(x-4)+solve(x-5)+solve(x-6)) % MOD;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    memset(memo, -1, sizeof(memo));
    ll ans = solve(n);
    cout << ans << endl;

}