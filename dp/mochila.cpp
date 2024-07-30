#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
int memo[112][112];
int n, w;
int weight[112];
int value[112];

int solve(int i, int cap){
    if (cap < 0) return -INF;
    if (i == n) return 0;
    int& solvem = memo[i][cap];

    if (solvem != -1) return solvem;
    return solvem = max(solve(i+1, cap-weight[i]) + value[i], solve(i+1, cap));
}

int main(){
    cin >> n >> w;
    for (int i = 0; i < n; i++){
        cin >> weight[i] >> value[i];
    }

    memset(memo, -1, sizeof(memo));

    cout << solve(0, w) << endl;
}