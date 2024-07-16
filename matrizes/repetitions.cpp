#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    int n = s.length(), ans = 0, sum_at = 1;

    for (int i = 0; i < n; i++){
        if (s[i] == s[i + 1]){
            sum_at++;
        } else {
            sum_at = 1;
        }

        ans = max(ans, sum_at);
    }

    cout << ans << endl;

}