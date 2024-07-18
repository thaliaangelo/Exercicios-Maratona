#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    int ans = n;
    sort(s.begin(), s.end());

    for (int i = 0; i < n; i++){
        if (s[i] == s[i + 1]) ans--;
    }

    if (ans % 2 == 0){
        cout << "CHAT WITH HER!\n";
    } else {
        cout << "IGNORE HIM!\n";
    }
}