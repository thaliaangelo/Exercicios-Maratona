#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size(), ans = 0;

    int sup = 1;
    for (int i = 0; i < n; i++){
        if (s[i] == s[i + 1]){
            sup++;
        } else {
            sup = 1;
        }

        ans = max(ans, sup);
    }

    if (ans >= 7) cout << "YES\n";
    else cout << "NO\n";
}