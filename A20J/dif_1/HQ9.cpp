#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int ans = 0;

    int n = s.size();
    for (int i = 0; i < n; i++){
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9' || s[i] == '+'){
            ans++;
        } 
    }

    if (ans != 0){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}