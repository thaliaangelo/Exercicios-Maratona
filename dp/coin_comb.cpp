#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;
typedef long long ll;
int memo[11234][11234];
int coins[103];
int n, x;

int solve(int i, int sum){
    if (sum == 0) return 1;
    if (sum < 0) return 0;
    if (i == n) return 0;

    int& solvem = memo[i][sum];
    if (solvem != -1) return solvem;
    return solvem = (solve(i+1, sum-coins[i])+solve(i, sum-coins[i])+solve(i+1, sum)) % MOD;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> x;
    for (int i = 0; i < n; i++){
        cin >> coins[i];
    }

    memset(memo, -1, sizeof(memo));
    int ans = solve(0, x);
    cout << ans << endl;
}