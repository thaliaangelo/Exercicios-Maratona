#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int n = s.size();
    string r;

    for (int i = (n - 1); i >= 0; i--){
        r = r + s[i];
    }

    if (r == t) cout << "YES\n";
    else cout << "NO\n";
}