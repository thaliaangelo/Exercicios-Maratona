#include <bits/stdc++.h>

using namespace std;

int n;
int h[1123456];
int memo[1123456];

int solve(int i){
    if (i >= n) return 0;
    if (n == 2) return abs(h[1]-h[2]);

    int& solvem = memo[i];
    if (solvem != -1) return solvem;
    return solvem = min(solve(i+1)+abs(h[i]-h[i+1]), solve(i+2)+abs(h[i]-h[i+2]));

}

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> h[i];
    }

    memset(memo, -1, sizeof(memo));

    int ans = solve(1);
    cout << ans << endl;


}