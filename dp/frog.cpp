#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
int n;
int height[112345];
int memo[11234][11234];

int solve(int i){
    if (i > n) return INF;

    int& solvem = memo[i];
    if (solvem != -1) return solvem;
    return solvem = min(abs(height[i]-height[i+1]), abs(height[i]-height[i+2]));

}

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> height[i];
    }

    memset(memo, -1, sizeof(memo));

    int ans = solve(1);


}