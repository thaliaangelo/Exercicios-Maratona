#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    string ans;
    for (int i = 0; i < n; i++){
        if (s1[i] != s2[i]){
            ans = ans + '1';
        } else {
            ans = ans + '0';
        }
    }

    cout << ans << endl;

}