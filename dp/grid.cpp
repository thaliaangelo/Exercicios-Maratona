#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int MOD = 1e9+7;
int memo[11234][11234];
string grid[112345];
int n;

ll solve(int i, int j){
    if (i < 0 || j < 0) return 0;
    if (grid[i][j] == '*') return 0;
    if (i == 0 && j == 0) return 1;

    int& solvem = memo[i][j];
    if (solvem != -1) return solvem;
    return solvem = (solve(i-1, j) + solve(i, j-1)) % MOD;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        grid[i] = s;
    }

    memset(memo, -1, sizeof(memo));
    ll ans = solve(n-1, n-1);
    cout << ans << endl;

}