#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    int n;

    while(t--){
        cin >> n;
        int ans = 0, odd = 0, even = 0;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            if (x % 2 == 0){
                even++;
                ans++;
            } else {
                odd++;
            }
        }
        
        if (n % 2 == 0 && odd == 1){
            ans++;
        }

        if (odd != 0 && even != 0){
            cout << ans << endl;
        } else {
            cout << 0 << endl;
        }
    }
}