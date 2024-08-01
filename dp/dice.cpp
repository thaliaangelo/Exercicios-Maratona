#include <bits/stdc++.h>

using namespace std;

const unsigned int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
int dice[] = {1,2,3,4,5,6};
int memo[11234][11234];
int n;

int solve(int i, int x){
    if (x <= 0) return 0;
    if (x == 1) return 1;
    if (x >= 2 && x <=6) return 1+solve(i, x-i)+solve(i+1, x-i);

    int& solvem = memo[i][x];
    if (solvem != -1) return solvem;
    return solvem = (solve(i+1, x-i) + solve(i, x-i)) % MOD;

}

int main(){
    cin >> n;
    memset(memo, -1, sizeof(memo));
    int ans = solve(0, n);
    cout << ans << endl;
    
}