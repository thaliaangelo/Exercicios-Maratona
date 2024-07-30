#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector <pair <int, int>> value(n+1);
        for (int i = 1; i <= n; i++){
            int a; cin >> a;
            value[i].first = a;
            value[i].second = i;
        }

        if (n == 1){
            cout << value[1].first << endl;
        } else {
            int ans = 0;
            sort(value.begin(), value.end());
            for (int i = n; i > 0; i--){
                if (value[i].second % 2 == 0) continue;
                else {
                    ans = value[i].first;
                    break;
                }
            }

            cout << ans << endl;
        }
    }


}