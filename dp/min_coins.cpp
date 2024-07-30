#include <bits/stdc++.h>

using namespace std;

long long n, x;
const int INF = 0x3f3f3f3f;
long long memo[1123][112345];
long long coins[11234];

long long solve(int i, long long value){
    if (i == n) return INF;
    if (value < 0) return INF;
    if (value == 0) return 0;

    long long& solvem = memo[i][value];
    if (solvem != -1) return solvem;
    return solvem = min({solve(i+1, value-coins[i])+1, solve(i, value-coins[i])+1, solve(i+1, value)});
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

    long long ans = solve(0, x);
    if (ans == INF) cout << "-1" << endl;
    else cout << ans << endl;
}