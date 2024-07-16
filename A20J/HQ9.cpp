#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int ans = 0;

    int n = s.size();
    for (int i = 0; i < n; i++){
        switch (s[i]){
        case 'H':
            ans++;
            break;
        case 'Q':
            ans ++;
            break;
        case '9' :
            ans ++;
            break;
        case '+' :
            ans++;
            break;
        }
    }

    if (ans != 0){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}