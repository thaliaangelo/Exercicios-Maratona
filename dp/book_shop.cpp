#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
int pages[1123];
int prices[1123];
int memo[1123][112345];
int n, x;

int solve(int i, int money){
    if (money == x) return 0;
    if (money > x) return -INF;
    if (i == n) return 0;

    int& solvem = memo[i][money];
    if (solvem != -1) return solvem;
    return solvem = max(solve(i+1, money+prices[i])+pages[i], solve(i+1, money));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> x;
    for (int i = 0; i < n; i++){
        cin >> prices[i];
    }

    for (int i = 0; i < n; i++){
        cin >> pages[i];
    }

    memset(memo, -1, sizeof(memo));

    int ans = solve(0, 0);
    cout << ans << endl;

}