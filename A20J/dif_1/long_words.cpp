#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        int t = s.size();

        if (t > 10){
            string ans;
            int sup = (t - 2);
            ans = ans + s[0] + to_string(sup) + s[t - 1];
            cout << ans << endl;
        } else {
            cout << s << endl;
        }
    }
}