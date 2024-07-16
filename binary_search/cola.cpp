#include <bits/stdc++.h>

using namespace std;

int shops[112345];

int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> shops[i];
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++){
        int ans = 0;
        int x; 
        cin >> x;
        for (int j = 0; j < n; j++){
            if (x >= shops[j]) ans++;
            
        }

        cout << ans << endl;
    }


}