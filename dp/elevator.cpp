#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
int n, w;
int we[25];
int memo[11234][11234];

int solve(int i, int peso_at){
    if (i == n) return 0;
    if (peso_at > w) return INF;
    if (peso_at <= w) return 1;

    int&solvem = memo[i][peso_at];
    if (solvem != -1) return solvem;
    return solvem = min(solve(i+1, peso_at+we[i]), solve(i+1, peso_at));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> w;
    for (int i = 0; i < n; i++){
        cin >> we[i];
    }
    memset(memo, -1, sizeof(memo));

    int ans = solve(0, 0);
    cout << ans << endl;
}