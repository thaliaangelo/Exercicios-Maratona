#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    string h = "hello";
    int n = s.size();

    int i = 0; //string s
    int at = 0; //string hello
    bool equal = true;

    while(i < n){
        if (s[i] == s[at]){
            at++;
            i++;
            equal = true;
        } else {
            i++;
            equal = false;
        }
    }

    if (equal) cout << "YES\n";
    else cout << "NO\n";
}