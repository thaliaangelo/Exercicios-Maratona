#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    bool ap = false;

    int n = s.size();
    for (int i = 0; i < n; i++){
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9' || s[i] == '+'){
            ap = true;
        } 
    }

    if (ap){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}