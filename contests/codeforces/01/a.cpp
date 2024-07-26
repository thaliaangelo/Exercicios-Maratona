#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        while(n != 0){
            if (n >= 4){
                n -= 4;
                ans++;
            } else if (n == 2){
                n -= 2;
                ans++;
            }
        }

        cout << ans << endl;
    }
}