#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    for (int i = 0; i < t; i++){
        int n, u; cin >> n >> u;
        int arr[n];
        for (int j = 0; j < n; j++){
            arr[j] = 0;
        }

        for (int k = 0; k < u; k++){
            int l, r, val; cin >> l >> r >> val;
            for (int t = l; t <= r; t++){
                arr[t] += val;
            }
        }

        int q; cin >> q;
        
        for (int j = 0; j < q; j++){
            int x; cin >> x;
            cout << arr[x] << endl;
        }
    }

}
