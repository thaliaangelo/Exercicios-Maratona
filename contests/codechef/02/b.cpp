#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t; cin >> t;
    int n, d;
    while(t--){
        cin >> n >> d;
        int ans = 0;
        bool closed = true;

        for (int i = 0; i < n; i++){
            int x; cin >> x;
            if (x > d and closed){
                ans++;
                closed = false;
            } else if (x <= d and closed == false){
                ans++;
                closed = true;
            }
        }

        cout << ans << endl;
    }
}