#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;
int n, m;
int memo[11234][11234];

int solve(int i, int j){
    if (i < 0 || j < 0) return 0;
    if (i == 0 && j == 0) return 1;

    int& solvem = memo[i][j];
    if (solvem != -1) return solvem;
    return solvem = (solve(i-2, j-1) + solve(i-1, j-2)) % MOD;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    memset(memo, -1, sizeof(memo));
    int ans = solve(n, m);
    cout << ans << endl;
}