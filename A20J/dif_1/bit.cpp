#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;

    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        char op = s[1];
        if (op == '+'){
            ans++;
        } else if (op == '-'){
            ans--;
        }
    }

    cout << ans << endl;
}