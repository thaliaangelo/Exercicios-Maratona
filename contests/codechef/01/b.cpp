#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int x, y, z;
        cin >> x >> y >> z;
        int ans = 0;
        int tot = x * y;
        while(tot > z){
            tot -= y;
            ans++;
        }

        cout << ans << endl;

    }
}