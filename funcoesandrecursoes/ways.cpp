#include <bits/stdc++.h>

using namespace std;

int s, e;
int solve(int final){
    if (s == final) return 1;
    if (final < s) return 0;
    return solve(final-1) + solve(final-2) + solve(final-3);
}

int main(){
    cin >> s >> e;
    cout << solve(e) << endl;
}