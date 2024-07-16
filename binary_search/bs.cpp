#include <bits/stdc++.h>

using namespace std;

int arr[112345];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, q, ans = 0;
    cin >> n >> q;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++){
        long long x;
        cin >> x;
        long long l, r, m;
        l = 0;
        r = (n -1);
        while(l != r){
            m = (l + r) / 2;
            if (arr[m] == x){
                ans = m;
            } else if (arr[m] < x){
                l = m + 1;
            } else if (arr[m] > x){
                r = m - 1;
            }

            if (l == r){
                ans = -1;
            }
        }
    }

    cout << ans << endl;
}