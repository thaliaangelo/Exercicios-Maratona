#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    int n, k;

    while(t--){
        int ans = 0;
        int money = 0;

        cin >> n >> k;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            if (x >= k){
                money += x;
            } else if (x == 0 && money > 0){
                money--;
                ans++;
            }
        }

        cout << ans << endl;
    }
}